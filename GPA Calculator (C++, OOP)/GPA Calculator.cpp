// Student's GPA Calculator
#include <iostream>
#include <string>
using namespace std;

class GPACalculator {
public:
	const double A_plus = 4.0, A = 3.7, A_minus = 3.4, B_plus = 3.2, B = 3.0, B_minus = 2.8, C_plus = 2.6, C = 2.4,
		C_minus = 2.2, D_plus = 2.0, D = 1.5, D_minus = 1.0, F = 0.0;

};



int main() {

	const double A_plus = 4.0, A = 3.7, A_minus = 3.4, B_plus = 3.2, B = 3.0, B_minus = 2.8, C_plus = 2.6, C = 2.4,
		C_minus = 2.2, D_plus = 2.0, D = 1.5, D_minus = 1.0, F = 0.0;

	string studentName, courseGrade;

	double courseCreditHours = 0, gradeCal = 0, totalCoursesCreditHours = 0, totalGrades = 0, finalGPA = 0;

	int option = 0, ID = 0;

	cout << "Enter your name : ";
	getline(cin, studentName);
	cout << "Enter your ID : ";
	cin >> ID;

	for (;;) {
		cout << "Enter course grade : ";
		cin >> courseGrade;
		cin.ignore();
		cout << "Enter course credit hours : ";
		cin >> courseCreditHours;
		if (courseGrade == "A+" || courseGrade == "a+") { gradeCal = A_plus * courseCreditHours; }
		else if ( courseGrade == "A" || courseGrade == "a" )  { gradeCal = A * courseCreditHours; }
		else if ( courseGrade == "A-" || courseGrade == "a-" )  { gradeCal = A_minus * courseCreditHours; }
		else if ( courseGrade == "B+" || courseGrade == "b+" )  { gradeCal = B_plus * courseCreditHours; }
		else if ( courseGrade == "B" || courseGrade == "b" )  { gradeCal = B * courseCreditHours; }
		else if ( courseGrade == "B-" || courseGrade == "b-" )  { gradeCal = B_minus * courseCreditHours; }
		else if ( courseGrade == "C+" || courseGrade == "c+" )  { gradeCal = C_plus * courseCreditHours; }
		else if ( courseGrade == "C" || courseGrade == "c" )  { gradeCal = C * courseCreditHours; }
		else if ( courseGrade == "C-" || courseGrade == "c-" )  { gradeCal = C_minus * courseCreditHours; }
		else if (courseGrade == "D+" || courseGrade == "d+") { gradeCal = D_plus * courseCreditHours; }
		else if ( courseGrade == "D" || courseGrade == "d" )  { gradeCal = D * courseCreditHours; }
		else if (courseGrade == "D-" || courseGrade == "d-") { gradeCal = D_minus * courseCreditHours; }
		else if ( courseGrade == "F" || courseGrade == "f" )  { gradeCal = F * courseCreditHours; }
		else { cout << "Invalid Grade \a"; }

		totalCoursesCreditHours += courseCreditHours;
		totalGrades += gradeCal;

		cout << "Do you want to enter another course ( 1- yes , 2- no ) : ";
		cin >> option;

		if (option == 1) { continue; }
		else { break; }
	}
	finalGPA = totalGrades / totalCoursesCreditHours;

	cout << " Student's name is : " << studentName << endl << " Student's ID is : " << ID << endl
		<< " Student's GPA is : " << finalGPA << endl;

	if (finalGPA >= 3.5) { cout << " Your general appreciation is Excellent :) "; }
	else if ( 3.0 <= finalGPA < 3.5 ) { cout << " Your general appreciation is Verygood :) "; }
	else if ( 2.5 <= finalGPA < 3.0 ) { cout << " Your general appreciation is Good :) "; }
	else if (2.0 <= finalGPA < 2.5 ) { cout << " Your general appreciation is Fair :) "; }
	else if (1.0 <= finalGPA < 2.0) { cout << " Your general appreciation is Weak :) "; }
	else { cout << " Your general appreciation is Veryweak"; }
	return 0;
}