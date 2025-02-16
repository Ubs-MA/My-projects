//                                                                      College System Project
/* Mohamed Abbas (42310258) / Yousef Ahmed (42310385) / Farouk Ibrahim (42310285) / Abdelrahman Ahmed (42310291) / Abdallah Ahmed (42310293) */





#include<iostream>
#include<string>
using namespace std;





class College {                                   // Mohamed Abbas
protected:
	string password;
public:
	char gender = 'm';
	string name, email, phoneNumber;
	int age = 0;

	College(College& obj) {

		name = obj.name;
	}

	College() {}

	~College() {}

	void process();
};

void College::process() {

	cout << "########################################### Welcome to our website :) ###########################################" << endl << endl << endl
		<< "Enter 'd' for Doctor" << endl << "Enter 'a' for Doctor Assistant" << endl << "Enter 's' for Student" << endl << "Enter 'e' for Employee" << endl << endl
		<< "Choose your identity: ";
}





class Doctor :public College {                                   // Farouk Ibrahim
private:

	string researchDegree;

protected:

	string address, collegeGraduated, nationalId;

public:

	string subject;

	string getResearchDegree() {

		return researchDegree;
	}
	void setResearchDegree(string rD) {

		researchDegree = rD;
	}

	Doctor() {}

	Doctor(char g, string n, int ag, string nid, string adrs, string pN, string e, string pswrd, string s, string cG, string rD) {

		this->gender = g, name = n, age = ag, nationalId = nid, address = adrs, phoneNumber = pN, email = e, password = pswrd, subject = s, collegeGraduated = cG,
			researchDegree = rD;
	}

	Doctor(string e, string pswrd) {

		this->gender = 'f', name = "shimaa", age = 43, nationalId = "13579", address = "giza", phoneNumber = "13579", email = e, password = pswrd,
			subject = "Programming Languages", collegeGraduated = "ACU", researchDegree = "Master";
	}

	Doctor(Doctor& obj) {

		name = obj.name;
	}

	~Doctor() {

		cout << "Application is submitted and form is destructed!" << endl << "Thank You : )\a" << endl << endl;
	}

	void DrDisplay();
};

void Doctor::DrDisplay() {

	cout << "############################################ Your Application ############################################" << endl << endl << endl
		<< "Doctor's name is: " << name << endl << endl << "Gender: " << gender << endl << endl << "Age: " << age << endl << endl << "National ID: " << nationalId
		<< endl << endl << "Address: " << address << endl << endl << "Phone Number: " << phoneNumber << endl << endl << "Email: " << email << endl << endl
		<< "Subject: " << subject << endl << endl << "College graduated: " << collegeGraduated << endl << endl << "Research degree: " << getResearchDegree() << endl
		<< endl;
}





class DoctorAssistant :public Doctor {                                   // Abdallah Ahmed
private:

	string collegeDegree;

public:

	string getCollegeDegree() {

		return collegeDegree;
	}
	void setCollegeDegree(string cD) {

		collegeDegree = cD;
	}

	DoctorAssistant() {}

	DoctorAssistant(char g, string n, int ag, string nid, string adrs, string pN, string e, string pswrd, string s, string cG, string cD) {

		this->gender = g, name = n, age = ag, nationalId = nid, address = adrs, phoneNumber = pN, email = e, password = pswrd, subject = s, collegeGraduated = cG,
			collegeDegree = cD;
	}

	DoctorAssistant(string e, string pswrd) {

		this->gender = 'm', name = "Adam", age = 26, nationalId = "2468", address = "giza", phoneNumber = "2468", email = e, password = pswrd,
			subject = "Programming Languages", collegeGraduated = "ACU", collegeDegree = "Excellent";
	}

	DoctorAssistant(DoctorAssistant& obj) {

		name = obj.name;
	}

	~DoctorAssistant() {}

	void AssDisplay();
};

void DoctorAssistant::AssDisplay() {

	cout << "############################################ Your Application ############################################" << endl << endl << endl
		<< "Assistant's name is: " << name << endl << endl << "Age: " << age << endl << endl << "National ID: " << nationalId << endl << endl << "Address: "
		<< address << endl << endl << "Phone Number: " << phoneNumber << endl << endl << "Email: " << email << endl << endl << "Subject: " << subject << endl << endl
		<< "College graduated: " << collegeGraduated << endl << endl << "College degree: " << getCollegeDegree() << endl << endl;
}





class Student :public DoctorAssistant {                                   // Abdelrahman Ahmed
private:

	string studentID;

public:

	string getStudentID() {

		return studentID;
	}
	void setStudentID(string sID) {

		studentID = sID;
	}

	Student() {};

	Student(char g, string n, int ag, string nid, string adrs, string pN, string e, string pswrd, string sID) {

		this->gender = g, name = n, age = ag, nationalId = nid, address = adrs, phoneNumber = pN, email = e, password = pswrd, studentID = sID;
	}

	Student(string e, string pswrd) {

		this->gender = 'm', name = "Ahmed", age = 19, nationalId = "112233", address = "Giza", phoneNumber = "112233", email = e, password = pswrd, studentID = "000501";
	}

	Student(Student& obj) {

		name = obj.name;
	}

	~Student() {}

	void StdDisplay();
};

void Student::StdDisplay() {


	cout << "############################################ Your Application ############################################" << endl << endl << endl
		<< "Student's name is: " << name << endl << endl << "Age: " << age << endl << endl << "National ID: " << nationalId << endl << endl << "Address: "
		<< address << endl << endl << "Phone Number: " << phoneNumber << endl << endl << "Email: " << email << endl << endl << "Student ID: " << getStudentID()
		<< endl << endl;
}





class Employee :public College {                                   // Youssef Ahmed
private:

	string SAddress, employeeID, SNationalID;

public:

	string getEmployeeID() {

		return employeeID;
	}
	void setEmployeeID(string eID) {

		employeeID = eID;
	}

	string getSNationalID() {

		return SNationalID;
	}
	void setSNationalID(string SNID) {

		SNationalID = SNID;
	}

	string getSAddress() {

		return SAddress;
	}
	void setSAddress(string SAdrs) {

		SAddress = SAdrs;
	}

	Employee() {};

	Employee(char g, string n, int ag, string SNID, string SAdrs, string pN, string e, string pswrd, string eID) {

		this->gender = g, name = e, age = ag, SNationalID = SNID, SAddress = SAdrs, phoneNumber = pN, email = e, password = pswrd, employeeID = eID;
	}

	Employee(string e, string pswrd) {

		this->gender = 'm', name = "Mostafa", age = 52, SNationalID = "445566", SAddress = "Giza", phoneNumber = "445566", email = e, password = pswrd, employeeID = "99";
	}

	Employee(Employee& obj) {

		name = obj.name;
	}

	~Employee() {

		cout << "Application is submitted and form is destructed!" << endl << "Thank You : )\a" << endl << endl;
	}

	void EmpDisplay();
};

void Employee::EmpDisplay() {


	cout << "############################################ Your Application ############################################" << endl << endl << endl
		<< "Employee's name is: " << name << endl << endl << "Age: " << age << endl << endl << "National ID: " << getSNationalID() << endl << endl << "Address: "
		<< getSAddress() << endl << endl << "Phone Number: " << phoneNumber << endl << endl << "Email: " << email << endl << endl << "Employee ID: " << getEmployeeID()
		<< endl << endl;
}





class HourlyEmployee {                                   // Youssef Ahmed
private:
	int hourlyRate, hoursWorked;
public:

	HourlyEmployee(int rate, int hours)
	{
		hourlyRate = rate, hoursWorked = hours;
	}

	void setHourlyRate(int rate) {
		hourlyRate = rate;
	}

	void setHoursWorked(int hours) {
		hoursWorked = hours;
	}

	void HourlyEmpDisplay() {
		cout << "Hourly Rate: $" << hourlyRate << endl;
		cout << "Hours Worked: " << hoursWorked << endl;
		cout << "Total Earnings: $" << (hourlyRate * hoursWorked) << endl << endl;
	}

	HourlyEmployee(HourlyEmployee& obj) {

		hourlyRate = obj.hourlyRate;
	}

	HourlyEmployee() {}

	~HourlyEmployee() {}
};





class FixedWageEmployee {                                   // Youssef Ahmed
private:
	double fixedWage;
public:

	FixedWageEmployee() {
		fixedWage = 3000;
	}

	void setFixedWage(double wage) {
		fixedWage = wage;
	}

	void FixedWageEmpDisplay() {
		cout << "Fixed Wage: $" << fixedWage << endl << endl;
	}

	FixedWageEmployee(FixedWageEmployee& obj) {

		fixedWage = obj.fixedWage;
	}

	~FixedWageEmployee() {}
};





class ExtraCourses {                                   // Mohamed Abbas
private:

	double price = 0.0;
	int hours = 0, coursesNO = 0;
	static int totalPurchases;

public:

	static int getTotalPurchases() {

		return totalPurchases;
	}

	int getCoursesNO() {

		return coursesNO;
	}
	void setCoursesNO(int CN) {

		coursesNO = CN;
	}

	double getPrice() {

		return price;
	}
	void setPrice(double Pr) {

		price = Pr;
	}

	int getHours() {

		return hours;
	}
	void setHours(int Hrs) {

		hours = Hrs;
	}

	double getTotalCosts() {

		return price * hours;
	}

	ExtraCourses() {}

	ExtraCourses(int CN, double Pr, int Hrs) {

		coursesNO = CN, price = Pr, hours = Hrs;
	}

	ExtraCourses(ExtraCourses& obj) {

		hours = obj.hours;
	}

	~ExtraCourses() {

		cout << "Purchase is completed and form is destructed!" << endl << "Thank You : )\a" << endl << endl;
	}

	void CoursesMenu();

	void EXDisplay();
};

int ExtraCourses::totalPurchases = 0;

void ExtraCourses::CoursesMenu() {

	cout << "Enter '1' for first course, '4000 L.E', '1 hour'" << endl << "Enter '2' for second course, '7000 L.E', '2 hours'" << endl
		<< "Enter '3' for third course, '10000 L.E', '3 hours'" << endl;
}

void ExtraCourses::EXDisplay() {

	cout << "You purchased the course number: " << getCoursesNO() << " for " << getTotalCosts() << " that composed of " << getHours() << " hours" << endl;
}





int main() {





	char identity, action, g, buy, employeetype;
	int ag = 0, CN = 0, Hrs = 0;
	double Pr = 0.0, hoursWorked, hourlyRate;
	string n, adrs, e, s, cD, rD, cG, SAdrs, pN, nid, sID, SNID, eID, pswrd;





	College start;
	start.process();





	for (;;) {

		// choice between (doctor / assistant / student / employee)

		cin >> identity;



		if (identity == 'd') {     // Doctor

			cout << endl << "Enter 'r' for registeration, 'l' to login: ";

			for (;;) {

				cin >> action;

				if (action == 'r') {     // Register

					cout << endl << endl << "Welcome :)" << endl << endl << "                              ********** Please fill the application:- **********"
						<< endl << endl;
					cout << "What's your gender?" << endl << "(Enter 'm' for male and 'f' for female)" << endl << "Gender: ";

					for (;;) {

						cin >> g;

						if (g == 'm' || g == 'f') {

							break;
						}

						else {
							cout << "Invalid input!\a" << endl << "Please try again: ";
						}
					}

					cout << "Enter your name: ";
					cin.ignore();
					getline(cin, n);
					cout << "Enter your age: ";

					for (;;) {

						cin >> ag;

						if (ag > 30 && ag < 100) {

							break;
						}

						else {

							cout << "Invalid age!\a" << endl << "Try again : ";
						}
					}

					cout << "Enter your national ID: ";
					cin >> nid;
					cout << "Enter your address: ";
					cin.ignore();
					getline(cin, adrs);
					cout << "Enter your phone number: ";
					cin >> pN;
					cout << "Enter the email sent: ";
					cin.ignore();
					getline(cin, e);
					cout << "Enter the password sent (composed only of 4 characters): ";

					for (;;) {

						cin >> pswrd;

						if (pswrd == "1234") {
							break;
						}

						else {
							cout << "Invalid password!\a" << endl << "Try again : ";
						}
					}

					cout << "Enter your subject: ";
					cin.ignore();
					getline(cin, s);
					cout << "Enter the name of the college you graduated from: ";
					getline(cin, cG);
					cout << "Enter your research degree: ";
					getline(cin, rD);

					Doctor DoctorR(g, n, ag, nid, adrs, pN, e, pswrd, s, cG, rD);

					DoctorR.setResearchDegree(rD);

					DoctorR.DrDisplay();

					break;
				}

				else if (action == 'l') {     // login

					cout << endl << endl << "welcome :)" << endl << "Please enter your email and password:-" << endl << "Email: ";
					cin.ignore();
					getline(cin, e);
					cout << "Enter password (composed only of 4 characters): ";

					for (;;) {

						cin >> pswrd;

						if (pswrd == "1234") {
							break;
						}

						else {
							cout << "Invalid password!\a" << endl << "Try again : ";
						}
					}

					Doctor DoctorL(e, pswrd);

					DoctorL.DrDisplay();

					break;
				}

				else {

					cout << "Invalid input!\a" << endl;
				}
			}

			break;
		}





		else if (identity == 'a') {     // Doctor's Assistant

			cout << endl << "Enter 'r' for registeration, 'l' to login: ";

			for (;;) {

				cin >> action;

				if (action == 'r') {     // Register

					cout << endl << endl << "Welcome :)" << endl << endl << "                              ********** Please fill the application:- **********"
						<< endl << endl;
					cout << "What's your gender?" << endl << "(Enter 'm' for male and 'f' for female)" << endl << "Gender: ";

					for (;;) {

						cin >> g;

						if (g == 'm' || g == 'f') {

							break;
						}

						else {
							cout << "Invalid input!\a" << endl << "Please try again: ";
						}
					}

					cout << "Enter your name: ";
					cin.ignore();
					getline(cin, n);
					cout << "Enter your age: ";

					for (;;) {

						cin >> ag;

						if (ag > 25 && ag < 50) {

							break;
						}

						else {

							cout << "Invalid age!\a" << endl << "Try again : ";
						}
					}

					cout << "Enter your national ID: ";
					cin >> nid;
					cout << "Enter your address: ";
					cin.ignore();
					getline(cin, adrs);
					cout << "Enter your phone number: ";
					cin >> pN;
					cout << "Enter the email sent: ";
					cin.ignore();
					getline(cin, e);
					cout << "Enter the password sent (composed only of 4 characters): ";

					for (;;) {

						cin >> pswrd;

						if (pswrd == "1234") {
							break;
						}

						else {
							cout << "Invalid password!\a" << endl << "Try again : ";
						}
					}

					cout << "Enter your subject: ";
					cin.ignore();
					getline(cin, s);
					cout << "Enter the name of the college you graduated from: ";
					getline(cin, cG);
					cout << "Enter your college degree: ";
					getline(cin, cD);

					DoctorAssistant AssistantR(g, n, ag, nid, adrs, pN, e, pswrd, s, cG, cD);

					AssistantR.setCollegeDegree(cD);

					AssistantR.AssDisplay();

					break;
				}

				else if (action == 'l') {     // login

					cout << endl << endl << "welcome :)" << endl << "Please enter your email and password:-" << endl << "Email: ";
					cin.ignore();
					getline(cin, e);
					cout << "Enter password (composed only of 4 characters): ";

					for (;;) {

						cin >> pswrd;

						if (pswrd == "1234") {
							break;
						}

						else {
							cout << "Invalid password!\a" << endl << "Try again : ";
						}
					}

					DoctorAssistant AssistantL(e, pswrd);

					AssistantL.AssDisplay();

					break;
				}

				else {

					cout << "Invalid input!\a";
				}
			}

			break;
		}





		else if (identity == 's') {     // Student

			cout << endl << "Enter 'r' for registeration, 'l' to login: ";

			for (;;) {

				cin >> action;

				if (action == 'r') {     // Register

					cout << endl << endl << "Welcome :)" << endl << endl << "                              ********** Please fill the application:- **********"
						<< endl << endl;
					cout << "What's your gender?" << endl << "(Enter 'm' for male and 'f' for female)" << endl << "Gender: ";

					for (;;) {

						cin >> g;

						if (g == 'm' || g == 'f') {

							break;
						}

						else {
							cout << "Invalid input!\a" << endl << "Please try again: ";
						}
					}

					cout << "Enter your name: ";
					cin.ignore();
					getline(cin, n);
					cout << "Enter your age: ";

					for (;;) {

						cin >> ag;

						if (ag > 17 && ag < 30) {

							break;
						}

						else {

							cout << "Invalid age!\a" << endl << "Try again : ";
						}
					}

					cout << "Enter your national ID: ";
					cin >> nid;
					cout << "Enter your address: ";
					cin.ignore();
					getline(cin, adrs);
					cout << "Enter your phone number: ";
					cin >> pN;
					cout << "Enter the email sent: ";
					cin.ignore();
					getline(cin, e);
					cout << "Enter the password sent (composed only of 4 characters): ";

					for (;;) {

						cin >> pswrd;

						if (pswrd == "1234") {
							break;
						}

						else {
							cout << "Invalid password!\a" << endl << "Try again : ";
						}
					}
					cout << "Enter your college ID: ";
					cin >> sID;

					Student stdR(g, n, ag, nid, adrs, pN, e, pswrd, sID);

					stdR.setStudentID(sID);

					stdR.StdDisplay();

					break;
				}

				else if (action == 'l') {     // login

					cout << endl << endl << "welcome :)" << endl << "Please enter your email and password:-" << endl << "Email: ";
					cin.ignore();
					getline(cin, e);
					cout << "Enter password (composed only of 4 characters): ";

					for (;;) {

						cin >> pswrd;

						if (pswrd == "1234") {
							break;
						}

						else {
							cout << "Invalid password!\a" << endl << "Try again : ";
						}
					}

					Student stdL(e, pswrd);

					stdL.StdDisplay();

					break;
				}

				else {

					cout << "Invalid input!\a";
				}
			}

			break;
		}





		else if (identity == 'e') {     // Employee

			cout << endl << "Enter 'r' for registeration, 'l' to login: ";

			for (;;) {

				cin >> action;

				if (action == 'r') {     // Register

					cout << endl << endl << "Welcome :)" << endl << endl << "                              ********** Please fill the application:- **********"
						<< endl << endl;
					cout << "What's your gender?" << endl << "(Enter 'm' for male and 'f' for female)" << endl << "Gender: ";

					for (;;) {

						cin >> g;

						if (g == 'm' || g == 'f') {

							break;
						}

						else {
							cout << "Invalid input!\a" << endl << "Please try again: ";
						}
					}

					cout << "Enter your name: ";
					cin.ignore();
					getline(cin, n);
					cout << "Enter your age: ";

					for (;;) {

						cin >> ag;

						if (ag > 20 && ag < 60) {

							break;
						}

						else {

							cout << "Invalid age!\a" << endl << "Try again : ";
						}
					}

					cout << "Enter your national ID: ";
					cin >> SNID;
					cout << "Enter your address: ";
					cin.ignore();
					getline(cin, SAdrs);
					cout << "Enter your phone number: ";
					cin >> pN;
					cout << "Enter the email sent: ";
					cin.ignore();
					getline(cin, e);
					cout << "Enter the password sent (composed only of 4 characters): ";

					for (;;) {

						cin >> pswrd;

						if (pswrd == "1234") {
							break;
						}

						else {
							cout << "Invalid password!\a" << endl << "Try again : ";
						}
					}

					cout << "Enter your college ID: ";
					cin >> eID;

					for (;;) {

						cout << "Enter 'f' for Fixed Wage Employee and 'h' for Hourly Employee : ";
						cin >> employeetype;

						if (employeetype == 'f') {

							FixedWageEmployee f;

							Employee empR(g, n, ag, SNID, SAdrs, pN, e, pswrd, eID);

							empR.setSNationalID(SNID);
							empR.setSAddress(SAdrs);
							empR.setEmployeeID(eID);

							empR.EmpDisplay();

							f.FixedWageEmpDisplay();

							break;
						}

						else if (employeetype == 'h') {

							cout << "please enter the number of working hours:";
							cin >> hoursWorked;
							cout << "enter the working rate:";
							cin >> hourlyRate;

							HourlyEmployee H(hoursWorked, hourlyRate);

							Employee empR(g, n, ag, SNID, SAdrs, pN, e, pswrd, eID);

							empR.setSNationalID(SNID);
							empR.setSAddress(SAdrs);
							empR.setEmployeeID(eID);

							empR.EmpDisplay();

							H.HourlyEmpDisplay();

							break;
						}
					}

					break;
				}

				else if (action == 'l') {     // login

					cout << endl << endl << "welcome :)" << endl << "Please enter your email and password:-" << endl << "Email: ";
					cin.ignore();
					getline(cin, e);
					cout << "Enter password (composed only of 4 characters): ";

					for (;;) {

						cin >> pswrd;

						if (pswrd == "1234") {
							break;
						}

						else {
							cout << "Invalid password!\a" << endl << "Try again : ";
						}
					}

					Employee empL(e, pswrd);

					empL.EmpDisplay();

					break;
				}

				else {

					cout << "Invalid input!\a";
				}
			}

			break;
		}

		else {

			cout << "Invalid input!\a" << endl << "Enter 'd' for Doctor" << endl
				<< "Enter 'a' for Doctor Assistant" << endl << "Enter 's' for Student" << endl
				<< "Enter 'e' for Employee" << endl;
		}
	}





	cout << "Do you want to buy extra courses?" << endl << "enter 'y' for yes, 'n' for no: ";

	for (;;) {

		cin >> buy;

		if (buy == 'y') {

			cout << "Note: YOU CAN BUY 1 OF 3 COURSES ONLY!" << endl << endl;

			ExtraCourses ord(CN, Pr, Hrs);

			ord.CoursesMenu();

			cin >> CN;

			for (;;) {

				if (CN == 1) {

					ord.setCoursesNO(CN);

					ord.setPrice(4000.0);

					ord.setHours(1);

					ord.EXDisplay();

					break;
				}

				else if (CN == 2) {

					ord.setCoursesNO(CN);

					ord.setPrice(7000.0);

					ord.setHours(2);

					ord.EXDisplay();

					break;
				}

				else if (CN == 3) {

					ord.setCoursesNO(CN);

					ord.setPrice(10000.0);

					ord.setHours(3);

					ord.EXDisplay();

					break;
				}

				else {

					cout << "Invalid input!\a" << endl << "Try again : ";
				}
			}

			break;
		}

		else {

			cout << endl << "Thank you for visiting us! :)\a";

			break;
		}
	}

	return 0;
}