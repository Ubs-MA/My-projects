from flask import (
    Flask,  # main app
    render_template,  # show html pages
    url_for,  # links to routes
    redirect,  # send user to another page
    request,  # read data from user
    flash,  # show short messages
    abort,  # stop action
    session,  # temp data while session
)

from flask_login import (
    LoginManager,  # manage everything for login
    login_user,  # for login
    logout_user,  # for logout
    current_user,  # user info logged in
    login_required,  # allow only logged in users
)

from sqlalchemy.exc import IntegrityError  # handle database errors
from werkzeug.utils import (
    secure_filename,
)  # differentiate between uploading files and videos
import os

from forms import (
    RegistrationForm,  # sign-up form
    LoginForm,  # login form
    PostForm,  # new posts
    CommentForm,  # add comments
    LikeForm,  # like posts
    DeleteForm,  # for deletion (anything)
)

from models import db, User, Post, Comment, Like
from config import DevConfig

########################### App Setup ############################

app = Flask(__name__)
app.config.from_object(DevConfig)

# Directory for uploaded files
UPLOAD_FOLDER = os.path.join("static", "uploads")
os.makedirs(UPLOAD_FOLDER, exist_ok=True)
app.config["UPLOAD_FOLDER"] = UPLOAD_FOLDER

db.init_app(app)

login_manager = LoginManager(app)
login_manager.login_view = "login"
login_manager.login_message_category = "info"

# ------------------ User Loader ------------------


@login_manager.user_loader  # look for user in DB by id
def load_user(user_id):
    return User.query.get(int(user_id))


# ------------------ Routes ------------------


@app.route("/")
def landing():
    return render_template("landing.html")


@app.route("/home")
@login_required
def home():
    # Show all posts by newest
    posts = Post.query.order_by(Post.date.desc()).all()

    return render_template("home.html", posts=posts)


@app.route("/post/<int:post_id>")
@login_required
def post_detail(post_id):
    # View post details by id / comments
    post = Post.query.get_or_404(post_id)
    comments = (
        Comment.query.filter_by(post_id=post.id)
        .order_by(Comment.date.asc())
        .all()  # oldest first
    )

    return render_template(  # send all data to template
        "post_detail.html",
        post=post,
        comments=comments,
        form=CommentForm(),
        like_form=LikeForm(),
        delete_form=DeleteForm(),
        comment_delete_form=DeleteForm(),
        liked=(  # check if user liked post
            Like.query.filter_by(user_id=current_user.id, post_id=post.id).first()
            is not None
            if current_user.is_authenticated
            else False
        ),
    )


# ------------------ New Post with Media ------------------

# only logged in users can create a post
# if valid the post is saved on detail page


@app.route("/new", methods=["GET", "POST"])
@login_required
def new_post():
    form = PostForm()  # a form for the post

    if form.validate_on_submit():
        image_filename = None
        video_filename = None

        # Handle image upload
        if form.image.data:
            image_file = form.image.data
            image_filename = secure_filename(image_file.filename)
            image_path = os.path.join(app.config["UPLOAD_FOLDER"], image_filename)
            image_file.save(image_path)

        # Handle video upload
        if form.video.data:
            video_file = form.video.data
            video_filename = secure_filename(video_file.filename)
            video_path = os.path.join(app.config["UPLOAD_FOLDER"], video_filename)
            video_file.save(video_path)

        post = Post(
            title=form.title.data,
            content=form.content.data,
            image_file=image_filename,
            video_file=video_filename,
            author=current_user,
        )
        db.session.add(post)
        db.session.commit()

        flash("Post published.", "success")
        return redirect(
            url_for("post_detail", post_id=post.id)
        )  # after posting, go to the new post’s detail page

    return render_template("new_post.html", form=form)


# ------------------ Register ------------------


@app.route("/register", methods=["GET", "POST"])
def register():
    if current_user.is_authenticated:
        return redirect(url_for("home"))  # if user logged in go home

    form = RegistrationForm()

    if form.validate_on_submit():

        if User.query.filter(
            (User.username == form.username.data) | (User.email == form.email.data)
        ).first():
            flash(
                "Username or email already exists.", "warning"
            )  # check if user with same username or email exist and make warning
        else:
            user = User(username=form.username.data, email=form.email.data)
            user.set_password(form.password.data)
            db.session.add(user)
            db.session.commit()

            flash("Account created — you can now log in.", "success")

            return redirect(url_for("login"))
    return render_template("register.html", form=form)


# ------------------ Login ------------------


@app.route("/login", methods=["GET", "POST"])
def login():
    if current_user.is_authenticated:
        return redirect(url_for("home"))  # if user logged in go home

    form = LoginForm()

    if form.validate_on_submit():
        user = User.query.filter_by(email=form.email.data).first()  # find user by email

        if user and user.check_password(form.password.data):  # check email and pass
            login_user(user, remember=False)  # no remember me cookie

            next_page = request.args.get(
                "next"
            )  # if user wanted to access before logging the page will be stored until logging

            return redirect(next_page or url_for("home"))  # if wrong go home

        flash("Invalid email or password.", "danger")

    return render_template("login.html", form=form)


# ------------------ Logout ------------------


@app.route("/logout")
@login_required
def logout():
    logout_user()
    flash("You have been logged out.", "info")

    return redirect(url_for("login"))


# ------------------ Comments ------------------


@app.route("/post/<int:post_id>/comment", methods=["POST"])
@login_required
def add_comment(post_id):
    post = Post.query.get_or_404(post_id)  # fetch the post if it not exist
    form = CommentForm()

    if form.validate_on_submit():
        comment = Comment(content=form.content.data, author=current_user, post=post)
        db.session.add(comment)
        db.session.commit()

        flash("Comment posted.", "success")
    else:
        flash("Could not post comment.", "warning")

    return redirect(
        url_for("post_detail", post_id=post.id)
    )  # go to post after commenting


@app.route("/comment/<int:comment_id>/edit", methods=["GET", "POST"])
@login_required
def edit_comment(comment_id):
    comment = Comment.query.get_or_404(comment_id)

    if comment.user_id != current_user.id:
        abort(403)

    form = CommentForm(obj=comment)

    if form.validate_on_submit():
        comment.content = form.content.data
        db.session.commit()

        flash("Comment updated.", "success")

        return redirect(url_for("post_detail", post_id=comment.post_id))
    return render_template("edit_comment.html", form=form, comment=comment)


@app.route("/comment/<int:comment_id>/delete", methods=["POST"])  # route comment by id
@login_required
def delete_comment(comment_id):
    comment = Comment.query.get_or_404(comment_id)

    if comment.user_id != current_user.id:
        abort(403)  # only person who wrote the comment can edit

    post_id = comment.post_id
    db.session.delete(comment)
    db.session.commit()

    flash("Comment deleted.", "info")

    return redirect(
        url_for("post_detail", post_id=post_id)
    )  # if cancelled just so edit page


# ------------------ Likes ------------------


@app.route("/post/<int:post_id>/like", methods=["POST"])  # triggered when a user like
@login_required
def toggle_like(post_id):
    post = Post.query.get_or_404(post_id)  # find post by id
    existing = Like.query.filter_by(
        user_id=current_user.id, post_id=post.id
    ).first()  # check if already liked

    if existing:  # if exist then remove like and dec counter and max 0
        db.session.delete(existing)
        post.likes_count = max((post.likes_count or 1) - 1, 0)
        message = "Removed like."
        category = "info"
    else:  # if not then add like
        db.session.add(Like(user_id=current_user.id, post_id=post.id))
        post.likes_count = (post.likes_count or 0) + 1
        message = "Post liked."
        category = "success"

    try:  # save in DB and handle errors
        db.session.commit()

        flash(message, category)
    except IntegrityError:
        db.session.rollback()

        flash("Database error. Try again.", "danger")

    return redirect(url_for("post_detail", post_id=post.id))  # go back to post


# ------------------ Edit Post ------------------


@app.route("/post/<int:post_id>/edit", methods=["GET", "POST"])
@login_required
def edit_post(post_id):
    post = Post.query.get_or_404(post_id)

    if post.user_id != current_user.id:
        abort(403)  # check if the user is the one who wrote the post

    form = PostForm(obj=post)

    if form.validate_on_submit():  # if valid then edit the post
        post.title = form.title.data
        post.content = form.content.data

        # Update media if uploaded
        if form.image.data:
            image_filename = secure_filename(form.image.data.filename)
            form.image.data.save(
                os.path.join(app.config["UPLOAD_FOLDER"], image_filename)
            )
            post.image_file = image_filename
        if form.video.data:
            video_filename = secure_filename(form.video.data.filename)
            form.video.data.save(
                os.path.join(app.config["UPLOAD_FOLDER"], video_filename)
            )
            post.video_file = video_filename

        db.session.commit()
        flash("Post updated.", "success")
        return redirect(url_for("post_detail", post_id=post.id))
    return render_template("edit_post.html", form=form, post=post)


# ------------------ Delete Post ------------------


@app.route("/post/<int:post_id>/delete", methods=["POST"])
@login_required
def delete_post(post_id):
    post = Post.query.get_or_404(post_id)

    if post.user_id != current_user.id:
        abort(403)  # check if post exist

    db.session.delete(post)
    db.session.commit()  # delete post from DB

    flash("Post deleted.", "info")

    return redirect(url_for("home"))


# ------------------ Profile ------------------


@app.route("/profile/<int:user_id>")
@login_required
def profile(user_id):
    user = User.query.get_or_404(user_id)  # find profile user by id
    posts = (
        Post.query.filter_by(user_id=user.id).order_by(Post.date.desc()).all()
    )  # show posts by newest
    total_likes = sum((p.likes_count or 0) for p in posts)  # total likes

    return render_template(
        "profile.html", user=user, posts=posts, total_likes=total_likes
    )


@app.route("/me")
@login_required
def me():  # show profile of user logged in
    return redirect(url_for("profile", user_id=current_user.id))


# ------------------ Clear Session ------------------


@app.route("/clear_session")  # clear all sessions when logged out
def clear_session():
    session.clear()
    logout_user()
    flash("Session cleared. You are logged out.", "info")

    return redirect(url_for("login"))


# ------------------ Run ------------------

if __name__ == "__main__":
    with app.app_context():
        db.create_all()
    app.run(host="0.0.0.0", port=5000, debug=True)
