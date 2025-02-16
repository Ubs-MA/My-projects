#include <iostream>
using namespace std;

class node
{
public:
    int data, ID_Student, age;
    string name, phone;
    char gender;
    //------------------
    string courseName;
    int Hours;
    int MoneyPerHour;
    //----------------
    node* link;  // Pointer for linked list operations
    node* right; // Pointer for binary tree (right child)
    node* left;  // Pointer for binary tree (left child)

    node() // default constructor
    {
        data = 0;
        ID_Student = 0;
        age = 0;
        name = "";
        phone = "";
        gender = '\0';
        courseName = "";
        Hours = 0;
        MoneyPerHour = 0;
        left = nullptr;
        right = nullptr;
        link = nullptr;
    }
    node(int val)
    {
        data = val;
        link = nullptr;
        right = nullptr;
        left = nullptr;
    }

    node(int ID_Student, int age, string name, string phone, char gender) // Constructor for creating student node
    {
        this->ID_Student = ID_Student;
        this->age = age;
        this->name = name;
        this->phone = phone;
        this->gender = gender;
        link = nullptr;
    }

    node(string courseName, int Hours, int MoneyPerHour) // Constructor for course details
    {
        this->courseName = courseName;
        this->Hours = Hours;
        this->MoneyPerHour = MoneyPerHour;
        link = nullptr;
        right = nullptr;
        left = nullptr;
    }

    node(int h, int MPH) // constructor for salary (stack)
    {
        Hours = h;
        MoneyPerHour = MPH;
        link = nullptr;
    }
};

class System
{
public:
    bool Choice(int option) // function to handle choice between admin and user
    {
        return option == 1;
    }

    void Display_System() // function displaying the main of program
    {
        cout << "-------------------------------------------  Student Management System  -------------------------------------------"
            << endl
            << endl
            << "Welcome :)" << endl
            << "Press (1) for ' Admin ' or (2) for ' User ': ";
    }
};

class Admin
{
public:
    node* head;
    int id = 0;

    Admin()
    {
        head = NULL;
    }

    void Create_Admins_LIst(int new_data) // Create function for linked list for Admin IDs
    {
        node* new_node = new node(id);
        new_node->data = new_data;

        if (head == nullptr)
        {
            new_node->link = nullptr;
            head = new_node;
        }
        else
        {
            node* temp = head;

            while (temp->link != nullptr)
            {
                temp = temp->link;
            }
            temp->link = new_node;
            new_node->link = nullptr;
        }
    }

    void Display_Admins_List() // Display function for linked list for Admin IDs
    {
        node* temp = head;

        cout << endl
            << "Valid IDs:- " << endl;

        while (temp != nullptr)
        {
            cout << temp->data << endl;
            temp = temp->link;
        }
    }

    bool Search_Admins_List(int id) // Search function for linked list for Admin IDs
    {
        node* temp = head;

        while (temp != nullptr) // While searching in IDs
        {
            if (temp->data == id) // If ID is found it will return true
            {
                return true; // ID found
            }
            temp = temp->link;
        }
        return false; // ID not found
    }

    void Display_Admin() // Display function for Admin
    {
        while (true) // Infinite loop
        {
            cout << endl
                << "Enter your ID: ";
            cin >> id;

            if (Search_Admins_List(id)) // If ID is found it will break the while loop
            {
                cout << "Valid ID!" << endl;

                break;
            }
            else // If ID is not found it will keep in the loop
            {
                cout << "ID not found, Please try again.\a";
            }
        }

        int Password = 0;

        cout << "Enter your password: ";
        cin >> Password;

        while (Password != 12345)
        {
            cout << "Invalid password, Please try again!\a" << endl
                << "Enter your password: ";
            cin >> Password;
        }
        cout << "Access Granted! Welcome back :)" << endl
            << endl;
        cout << "Press (1) to view 'Admissions list' or (2) to view 'Rejected Students' or (3) to view 'Accepted Students' or (4) to view 'Current Students': ";
    }
};

class Applicants
{
public:
    node* front = NULL; // Pointer to the front of the queue
    node* rear = NULL;  // Pointer to the rear of the queue

    Applicants()
    {
        front = rear = nullptr;
    }

    void enqueue(int ID_Student, int age, string name, string phone, char gender) // A function to add a new student to the queue
    {
        node* newNode = new node(ID_Student, age, name, phone, gender);

        if (rear == nullptr) // Queue is empty
        {
            front = rear = newNode;
        }
        else // Add to the end of the queue
        {
            rear->link = newNode;
            rear = newNode;
        }
    }

    node* dequeue() // A function to remove the first applicant node from the queue and return it
    {
        if (front == nullptr)
        {
            cout << "Queue is empty!" << endl;
            return nullptr;
        }
        node* temp = front;
        front = front->link;

        if (front == nullptr)
        {
            rear = nullptr; // If the queue becomes empty, reset the rear pointer
        }
        return temp; // Return the dequeued applicant (Not delete the node!)
    }

    bool isEmpty() // A function to check if the queue is empty
    {
        return front == nullptr;
    }

    void displayQueue() // A function to display all the applicants in the queue
    {
        if (front == nullptr)
        {
            cout << "Queue is empty!" << endl;
            return;
        }
        node* temp = front;

        while (temp != nullptr)
        {
            cout << "ID: " << temp->ID_Student << ", Age: " << temp->age << ", Name: " << temp->name
                << ", Phone: " << temp->phone << ", Gender: " << temp->gender << endl;
            temp = temp->link;
        }
    }
};

class Applicants_Status // It manages lists of accepted/rejected students
{
public:
    node* head;

    Applicants_Status()
    {
        head = nullptr;
    }

    void insert(int ID_Student, int age, string name, string phone, char gender) // A function to insert in a list
    {
        node* newNode = new node(ID_Student, age, name, phone, gender);

        if (head == nullptr)
        {
            newNode->link = nullptr;
            head = newNode;
        }
        else
        {
            node* temp = head;
            while (temp->link != nullptr)
            {
                temp = temp->link;
            }
            temp->link = newNode; // Add the new node at end
        }
    }

    void display() // A function to display the list of students
    {
        node* temp = head;

        while (temp != nullptr)
        {
            cout << "ID: " << temp->ID_Student << ", Age: " << temp->age << ", Name: " << temp->name
                << ", Phone: " << temp->phone << ", Gender: " << temp->gender << endl;
            temp = temp->link;
        }
    }
};

class User
{
public:
    void Display_User()
    {
        cout << "Welcome :)" << endl
            << "Press (1) for ' Doctor ' or (2) for ' Assistant ': ";
    }
};

// linked list
class Doctors
{

public:
    node* root; // Root pointer for courses (binary tree)
    node* top;  // Top pointer for salary stack
    node* head; // Head pointer for Doctor IDs (linked list)
    int id = 0; // ID variable for current Doctor

    Doctors()
    {
        top = nullptr;
        root = nullptr;
        head = NULL;
    }
    //-------------------------------------

    node* addCourses_Doctors(node* rot, string name, int hours, int MoneyPer_hour) // Function to add a course to the Doctor's binary tree of courses
    {

        if (rot == NULL)
        {
            node* newnode = new node(name, hours, MoneyPer_hour);

            return newnode;
        }
        if (id < rot->MoneyPerHour)
        {
            rot->left = addCourses_Doctors(rot->left, name, hours, MoneyPer_hour);
        }
        else
        {
            rot->right = addCourses_Doctors(rot->right, name, hours, MoneyPer_hour);
        }
        return rot;
    }

    void addCourrsess_Doctors(string name, int hours, int MoneyPer_hour) // function to start adding a course
    {
        root = addCourses_Doctors(root, name, hours, MoneyPer_hour);
    }

    void inorder_Doctors(node* rot) // function for in-order traversal to display courses
    {
        if (rot == nullptr)
        {
            return;
        }
        inorder_Doctors(rot->left);
        cout << "Course Name: " << rot->courseName << endl
            << "Hours: " << rot->Hours << endl
            << "Money Per Hour: " << rot->MoneyPerHour << endl
            << "---------------------------" << endl;
        inorder_Doctors(rot->right);
    }

    void InorderDisplayCourses_Doctors() // display inorder traversal way
    {
        inorder_Doctors(root);
        cout << "\n";
    }

    void pushSalary_Doctors(int h, int MPH) // Push salary data in stack
    {
        node* newNode = new node(h, MPH);
        newNode->link = top;
        top = newNode;
    }

    void popSalary_Doctors() // Pop salary data from stack
    {
        if (top == nullptr)
        {
            cout << "The salary list is empty." << endl;
            return;
        }
        node* temp = top;
        top = top->link;
        delete temp;

        cout << "Top salary data removed." << endl;
    }

    int calculateTotalSalary_Doctors() // Calculate total salary from stack
    {
        if (top == nullptr)
        {
            cout << "No salary data to calculate.\n";
            return 0;
        }
        int totalSalary = 0;

        node* current = top;

        while (current != nullptr)
        {
            totalSalary += current->Hours * current->MoneyPerHour;
            current = current->link;
        }
        return totalSalary;
    }
    void displaySalaryDetails_Doctors() // Display total salary
    {
        int total = calculateTotalSalary_Doctors();

        cout << "Total Salary: " << total << "$" << endl;
    }

    void Create_Doctors_LIst(int new_data) // Create function for linked list for Doctors IDs
    {
        node* new_node = new node(id);
        new_node->data = new_data;

        if (head == nullptr)
        {
            new_node->link = nullptr;
            head = new_node;
        }
        else
        {
            node* temp = head;

            while (temp->link != nullptr)
            {
                temp = temp->link;
            }
            temp->link = new_node;
            new_node->link = nullptr;
        }
    }

    bool Search_Doctors_List(int id) // Search function for linked list for Admin IDs
    {
        node* temp = head;

        while (temp != nullptr) // While searching in IDs
        {
            if (temp->data == id) // If ID is found it will return true
            {
                return true;
            }
            temp = temp->link;
        }
        return false; // Else it will return false
    }

    void Display_Doctors_List() // Display function for linked list for Admin IDs
    {
        node* temp = head;

        cout << endl
            << "Valid IDs:- " << endl;

        while (temp != nullptr)
        {
            cout << temp->data << endl;
            temp = temp->link;
        }
    }

    void Display_Doctors() // Display function for Admin
    {
        while (true) // Infinite loop
        {
            cout << endl
                << "Enter your ID: ";
            cin >> id;

            if (Search_Doctors_List(id)) // If ID is found it will break the while loop
            {
                cout << "Valid ID!" << endl;

                break;
            }
            else // If ID is not found it will keep in the loop
            {
                cout << "ID not found, Please try again.\a";
            }
        }

        int Password = 0;

        cout << "Enter your password: ";
        cin >> Password;

        while (Password != 678910)
        {
            cout << "Invalid password, Please try again!\a" << endl
                << "Enter your password: ";
            cin >> Password;
        }
        cout << "Access Granted! Welcome back :)" << endl
            << endl;
    }
};

class Assistants
{
public:
    // Node pointers for binary tree, stack, and linked list
    node* root; // Root of the binary tree
    node* top;  // Top of the stack
    node* head; // Head of the linked list
    int id = 0; // Current Assistant ID

    Assistants()
    {
        root = nullptr;
        top = nullptr;
        head = NULL;
    }
    //-------------------------------------
    // binary tree

    node* addCourses_Assistants(node* rot, string name, int hours, int MoneyPer_hour) // function to add courses to the binary tree
    {

        if (rot == NULL)
        {
            node* newnode = new node(name, hours, MoneyPer_hour);

            return newnode;
        }
        if (id < rot->MoneyPerHour)
        {
            rot->left = addCourses_Assistants(rot->left, name, hours, MoneyPer_hour);
        }
        else
        {
            rot->right = addCourses_Assistants(rot->right, name, hours, MoneyPer_hour);
        }
        return rot;
    }

    void addCourrsess_Assistants(string name, int hours, int MoneyPer_hour) // function to add courses
    {
        root = addCourses_Assistants(root, name, hours, MoneyPer_hour);
    }

    void inorder_Assistants(node* rot) // Inorder traversal to display courses
    {
        if (rot == nullptr)
        {
            return;
        }
        inorder_Assistants(rot->left);
        cout << "Course Name: " << rot->courseName << endl
            << "Hours: " << rot->Hours << endl
            << "Money Per Hour: " << rot->MoneyPerHour << endl
            << "---------------------------" << endl;
        inorder_Assistants(rot->right);
    }
    // display inorder traversal way
    void InorderDisplayCourses_Assistants()
    {
        inorder_Assistants(root);
        cout << "\n";
    }

    void pushSalary_Assistants(int h, int MPH) // Push salary data in stack
    {
        node* newNode = new node(h, MPH);
        newNode->link = top;
        top = newNode;

        cout << "Added to salary list: Hours = " << h << ", Rate = " << MPH << endl;
    }

    void popSalary_Assistants() // Pop salary data from stack
    {
        if (top == nullptr)
        {
            cout << "The salary list is empty." << endl;
            return;
        }
        node* temp = top;
        top = top->link;
        delete temp;

        cout << "Top salary data removed." << endl;
    }

    int calculateTotalSalary_Assistants() // Calculate total salary
    {
        if (top == nullptr)
        {
            cout << "No salary data to calculate.\n";
            return 0;
        }
        int totalSalary = 0;

        node* current = top;

        while (current != nullptr) // Traverse stack to calculate total salary
        {
            totalSalary += current->Hours * current->MoneyPerHour;
            current = current->link;
        }
        return totalSalary;
    }
    void displaySalaryDetails_Assistants() // Display total salary
    {
        int total = calculateTotalSalary_Assistants();

        cout << "Total Salary: " << total << "$" << endl;
    }

    void Create_Assistants_LIst(int new_data) // Create function for linked list for Doctors IDs
    {
        node* new_node = new node(id);
        new_node->data = new_data;

        if (head == nullptr)
        {
            new_node->link = nullptr;
            head = new_node;
        }
        else
        {
            node* temp = head;

            while (temp->link != nullptr)
            {
                temp = temp->link;
            }
            temp->link = new_node;
            new_node->link = nullptr;
        }
    }
    bool Search_Assistants_List(int id) // Search function for linked list for Admin IDs
    {
        node* temp = head;

        while (temp != nullptr) // While searching in IDs
        {
            if (temp->data == id) // If ID is found it will return true
            {
                return true;
            }
            temp = temp->link;
        }
        return false; // Else it will return false
    }

    void Display_Assistants_List() // Display function for linked list for Admin IDs
    {
        node* temp = head;

        cout << endl
            << "Valid IDs:- " << endl;

        while (temp != nullptr)
        {
            cout << temp->data << endl;
            temp = temp->link;
        }
    }
    //-------------------------------------

    void Display_Assistants() // Display function for Admin
    {
        while (true) // Infinite loop
        {
            cout << endl
                << "Enter your ID: ";
            cin >> id;

            if (Search_Assistants_List(id)) // If ID is found it will break the while loop
            {
                cout << "Valid ID!" << endl;

                break;
            }
            else // If ID is not found it will keep in the loop
            {
                cout << "ID not found, Please try again.\a";
            }
        }

        int Password = 0;

        cout << "Enter your password: ";
        cin >> Password;

        while (Password != 678910)
        {
            cout << "Invalid password, Please try again!\a" << endl
                << "Enter your password: ";
            cin >> Password;
        }
        cout << "Access Granted! Welcome back :)" << endl
            << endl;
    }
};

int main()
{

    int S_OPTION = 0; // Variable to store user choice for system option

    System S1; // System object

    S1.Display_System(); // Display system options

    while (true) // Loop to handle user input for selecting Admin or User
    {
        cin >> S_OPTION;

        if (S_OPTION == 1) // Admin option
        {
            break;
        }
        else if (S_OPTION == 2) // User option
        {
            break;
        }
        else // Invalid input
        {
            cout << "Invalid Choice, Please try again.\a" << endl
                << "Press (1) for ' Admin ' or (2) for ' User ': ";
        }
    }

    if (S_OPTION == 1) // Admin
    {
        Admin A1; // Admin object

        // Admin IDs
        A1.Create_Admins_LIst(50000);
        A1.Create_Admins_LIst(50010);
        A1.Create_Admins_LIst(50020);
        A1.Create_Admins_LIst(50030);
        A1.Create_Admins_LIst(50040);
        A1.Create_Admins_LIst(50050);

        A1.Display_Admins_List(); // Display list of Admin IDs

        A1.Display_Admin(); // Display admin details

        int Student_Option = 0; // Variable to store user choice for student operations

        Applicants Applicants_Queue; // Applicants queue object

        // sample applicants into the queue
        Applicants_Queue.enqueue(100001, 20, "Mohamed", "0123456789", 'm');
        Applicants_Queue.enqueue(100002, 19, "Dina", "0107654321", 'f');
        Applicants_Queue.enqueue(100003, 25, "Mostafa", "0112233445", 'm');
        Applicants_Queue.enqueue(100004, 18, "Mahmoud", "0123456789", 'm');
        Applicants_Queue.enqueue(100005, 22, "Aya", "0107654321", 'f');
        Applicants_Queue.enqueue(100006, 29, "Ahmed", "0112233445", 'm');
        Applicants_Queue.enqueue(100007, 21, "Khaled", "0112233445", 'm');
        Applicants_Queue.enqueue(100008, 20, "Youssef", "0153456789", 'm');
        Applicants_Queue.enqueue(100009, 19, "Yousra", "0107654321", 'f');
        Applicants_Queue.enqueue(1000010, 25, "Mohanad", "0112233445", 'm');
        Applicants_Queue.enqueue(1000011, 18, "Ziad", "0123456789", 'm');
        Applicants_Queue.enqueue(1000012, 22, "Sara", "0107654321", 'f');
        Applicants_Queue.enqueue(1000013, 29, "Ali", "0112233445", 'm');
        Applicants_Queue.enqueue(1000014, 21, "Waleed", "0112233445", 'm');

        Applicants_Status acceptedList;     // Accepted students' list
        Applicants_Status rejectedList;     // Rejected students' list
        Applicants_Status Current_Students; // Current students' list

        // Variables to store applicant data
        int ID_Student, age;
        string name, phone;
        char gender;

        while (!Applicants_Queue.isEmpty()) // Processing applicants in queue
        {
            node* currentApplicant = Applicants_Queue.dequeue(); // Dequeue an applicant

            if (currentApplicant->age < 22)
            {
                // Add to accepted and current students' lists
                acceptedList.insert(currentApplicant->ID_Student, currentApplicant->age, currentApplicant->name, currentApplicant->phone, currentApplicant->gender);
                Current_Students.insert(currentApplicant->ID_Student, currentApplicant->age, currentApplicant->name, currentApplicant->phone, currentApplicant->gender);
            }
            else
            {
                // Add to rejected list
                rejectedList.insert(currentApplicant->ID_Student, currentApplicant->age, currentApplicant->name, currentApplicant->phone, currentApplicant->gender);
            }

            // Free the dequeued applicant node if no longer needed
            delete currentApplicant;
        }

        while (true) // Handle options for displaying lists
        {
            cin >> Student_Option;

            if (Student_Option == 1)
            {
                break;
            }
            else if (Student_Option == 2)
            {
                break;
            }
            else if (Student_Option == 3)
            {
                break;
            }
            else if (Student_Option == 4)
            {
                break;
            }
            else
            {
                cout << "Invalid Choice, Please try again.\a" << endl
                    << "Press (1) to view 'Admissions list' or (2) to view 'Rejected Students' or (3) to view 'Accepted Students' or (4) to view 'Current Students': ";
            }
        }

        if (Student_Option == 1)
        {
            // Re-enqueue applicants as they were already transfered to accepted and rejected lists!!
            Applicants_Queue.enqueue(100001, 20, "Mohamed", "0123456789", 'm');
            Applicants_Queue.enqueue(100002, 19, "Dina", "0107654321", 'f');
            Applicants_Queue.enqueue(100003, 25, "Mostafa", "0112233445", 'm');
            Applicants_Queue.enqueue(100004, 18, "Mahmoud", "0123456789", 'm');
            Applicants_Queue.enqueue(100005, 22, "Aya", "0107654321", 'f');
            Applicants_Queue.enqueue(100006, 29, "Ahmed", "0112233445", 'm');
            Applicants_Queue.enqueue(100007, 21, "Khaled", "0112233445", 'm');
            Applicants_Queue.enqueue(100008, 20, "Youssef", "0153456789", 'm');
            Applicants_Queue.enqueue(100009, 19, "Yousra", "0107654321", 'f');
            Applicants_Queue.enqueue(1000010, 25, "Mohanad", "0112233445", 'm');
            Applicants_Queue.enqueue(1000011, 18, "Ziad", "0123456789", 'm');
            Applicants_Queue.enqueue(1000012, 22, "Sara", "0107654321", 'f');
            Applicants_Queue.enqueue(1000013, 29, "Ali", "0112233445", 'm');
            Applicants_Queue.enqueue(1000014, 21, "Waleed", "0112233445", 'm');

            cout << endl
                << "Applicants in the Queue:" << endl;

            Applicants_Queue.displayQueue(); // Display the list (Queue)
        }
        else if (Student_Option == 2)
        {
            cout << endl
                << "Rejected students' list:-" << endl;

            rejectedList.display();
        }
        else if (Student_Option == 3)
        {
            cout << endl
                << "Accepted students' list:-" << endl;

            acceptedList.display();
        }
        else if (Student_Option == 4)
        {
            cout << endl
                << "Current students' list:-" << endl;

            Current_Students.display();
        }
    }
    else if (S_OPTION == 2) // User
    {
        User U1; // user object

        U1.Display_User(); // Display user options

        int U_OPTION = 0; // Variable for user choice (Doctor or Assistant)

        while (true)
        {
            cin >> U_OPTION;

            if (U_OPTION == 1)
            {
                break;
            }
            else if (U_OPTION == 2)
            {
                break;
            }
            else
            {
                cout << "Invalid Choice, Please try again.\a" << endl
                    << "Press (1) for ' Doctor ' or (2) for ' Assistant ': ";
            }
        }

        if (U_OPTION == 1) // Doctor option
        {
            Doctors D1; // Create Doctors object

            // Doctor list of IDs
            D1.Create_Doctors_LIst(90000);
            D1.Create_Doctors_LIst(90010);
            D1.Create_Doctors_LIst(90020);
            D1.Create_Doctors_LIst(90030);
            D1.Create_Doctors_LIst(90040);
            D1.Create_Doctors_LIst(90050);

            // courses
            D1.addCourrsess_Doctors("Physics", 3, 100);
            D1.addCourrsess_Doctors("Electronics", 3, 90);
            D1.addCourrsess_Doctors("Linear Algebra", 3, 150);

            // salary
            D1.pushSalary_Doctors(15, 60); // 15 hours and 60/hour
            D1.pushSalary_Doctors(12, 70); // 12 hours and 70/hour
            D1.pushSalary_Doctors(5, 120); // 5 hours and 120/hour

            D1.Display_Doctors_List();

            D1.Display_Doctors();

            cout << "Press (1) to display the Courses: ";

            int Doctor_option = 0;

            while (true) // Loop to handle Doctor options
            {
                cin >> Doctor_option;

                if (Doctor_option == 1)
                {
                    break;
                }
                else
                {
                    cout << "Invalid Choice, Please try again.\a" << endl
                        << "Press (1) to display the Courses: ";
                }
            }

            if (Doctor_option == 1)
            {
                cout << endl
                    << endl
                    << "Your Courses:" << endl;

                D1.InorderDisplayCourses_Doctors();
            }

            cout << "Press (2) to display the Salary: ";

            while (true)
            {
                cin >> Doctor_option;

                if (Doctor_option == 2)
                {
                    break;
                }
                else
                {
                    cout << "Invalid Choice, Please try again.\a" << endl
                        << "Press (2) to display the Salary: ";
                }
            }

            if (Doctor_option == 2)
            {
                D1.displaySalaryDetails_Doctors();
            }
        }
        else if (U_OPTION == 2)
        {
            Assistants As1;

            As1.Create_Assistants_LIst(70000);
            As1.Create_Assistants_LIst(70010);
            As1.Create_Assistants_LIst(70020);
            As1.Create_Assistants_LIst(70030);
            As1.Create_Assistants_LIst(70040);
            As1.Create_Assistants_LIst(70050);

            As1.addCourrsess_Assistants("Electronics", 3, 50);

            As1.pushSalary_Assistants(12, 70); // 12 hours and 70/hour

            As1.Display_Assistants_List();

            As1.Display_Assistants();

            int Assistant_choice = 0;

            cout << "Press (1) to display the Courses: ";

            while (true)
            {
                cin >> Assistant_choice;

                if (Assistant_choice == 1)
                {
                    break;
                }
                else
                {
                    cout << "Invalid Choice, Please try again.\a" << endl
                        << "Press (1) to display the Courses: ";
                }
            }

            if (Assistant_choice == 1)
            {
                cout << endl
                    << endl
                    << "Your Courses:" << endl;

                As1.InorderDisplayCourses_Assistants();
            }

            cout << "Press (2) to display the Salary: ";

            while (true)
            {
                cin >> Assistant_choice;

                if (Assistant_choice == 2)
                {
                    break;
                }
                else
                {
                    cout << "Invalid Choice, Please try again.\a" << endl
                        << "Press (2) to display the Salary: ";
                }
            }

            if (Assistant_choice == 2)
            {
                As1.displaySalaryDetails_Assistants();
            }
        }
    }
    return 0;
}