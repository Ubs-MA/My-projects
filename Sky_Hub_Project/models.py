from datetime import datetime  # stores time when anything is created
from flask_sqlalchemy import SQLAlchemy  # connects Python classes to database tables
from flask_login import UserMixin  # methods (is_authenticated / get_id)
from werkzeug.security import (
    generate_password_hash,
    check_password_hash,
)  # for passwords

db = SQLAlchemy()  # create database


class User(db.Model, UserMixin):
    id = db.Column(db.Integer, primary_key=True)
    username = db.Column(db.String(50), unique=True, nullable=False)
    email = db.Column(db.String(120), unique=True, nullable=False)   # unique prevents duplicate
    password_hash = db.Column(db.String(256), nullable=False)

    posts = db.relationship(
        "Post", back_populates="author", cascade="all, delete-orphan"
    )
    comments = db.relationship(
        "Comment", back_populates="author", cascade="all, delete-orphan"
    )
    likes = db.relationship("Like", back_populates="user", cascade="all, delete-orphan")

    # cascade --> if a user is deleted, their posts / comments / likes are deleted

    def set_password(self, password: str) -> None:
        """Hashes and stores the password."""
        self.password_hash = generate_password_hash(password)

    def check_password(self, password: str) -> bool:
        """Verifies the password against stored hash."""
        return check_password_hash(self.password_hash, password)

    def has_liked(self, post) -> bool:
        """Check if the user already liked a given post."""
        return any(like.post_id == post.id for like in self.likes)


class Post(db.Model):
    id = db.Column(db.Integer, primary_key=True)
    title = db.Column(db.String(200), nullable=False)
    content = db.Column(db.Text, nullable=True)  # keep nullable for media-only posts
    image_file = db.Column(db.String(150), nullable=True)  # new field for image uploads
    video_file = db.Column(db.String(150), nullable=True)  # new field for video uploads
    date = db.Column(db.DateTime, nullable=False, default=datetime.utcnow)   # set creation date automatically

    user_id = db.Column(
        db.Integer, db.ForeignKey("user.id", ondelete="CASCADE"), nullable=False
    )
    author = db.relationship("User", back_populates="posts")

    # each post belongs to one user

    likes_count = db.Column(db.Integer, nullable=False, default=0)   # quick access for tracking likes on post

    comments = db.relationship(
        "Comment", back_populates="post", cascade="all, delete-orphan"
    )
    likes = db.relationship("Like", back_populates="post", cascade="all, delete-orphan")

    # post can have many comments and likes


class Comment(db.Model):
    id = db.Column(db.Integer, primary_key=True)
    content = db.Column(db.Text, nullable=False)
    date = db.Column(db.DateTime, nullable=False, default=datetime.utcnow)

    user_id = db.Column(
        db.Integer, db.ForeignKey("user.id", ondelete="CASCADE"), nullable=False
    )
    post_id = db.Column(
        db.Integer, db.ForeignKey("post.id", ondelete="CASCADE"), nullable=False
    )

    # each comment belongs to a user and a post

    author = db.relationship("User", back_populates="comments")
    post = db.relationship("Post", back_populates="comments")


class Like(db.Model):
    id = db.Column(db.Integer, primary_key=True)
    user_id = db.Column(
        db.Integer, db.ForeignKey("user.id", ondelete="CASCADE"), nullable=False
    )
    post_id = db.Column(
        db.Integer, db.ForeignKey("post.id", ondelete="CASCADE"), nullable=False
    )
    date = db.Column(db.DateTime, nullable=False, default=datetime.utcnow)

    # each like linked to a user and a post

    user = db.relationship("User", back_populates="likes")
    post = db.relationship("Post", back_populates="likes")

    __table_args__ = (db.UniqueConstraint("user_id", "post_id", name="uix_user_post"),)
    # prevent same user from liking same post more than once
