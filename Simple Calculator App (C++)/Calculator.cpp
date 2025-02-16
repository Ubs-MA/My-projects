#include<iostream>
using namespace std;

class Calculator {
public:
	double Calculate(double x, char oper, double y);
};

double Calculator::Calculate(double x, char oper, double y) {
	switch (oper) {
	case '+':
		return x + y;
	case '-':
		return x - y;
	case'*':
		return x * y;
	case'/':
		for (;;) {

			if (y != 0) {

				return x / y;
			}
			else {

				cout << "Division by zero error!" << endl;
				return 0.0;
			}
		}

	default:
		cout << "Invalid operator!" << endl;
		return 0.0;
	}
}

int main() {

	double x = 0.0;
	double y = 0.0;
	double result = 0.0;
	char oper;

	cout << "In the form of { a }     (+) (-) (*) (/)     { b }\n\n";
	cout << "(+) for Addition\n(-) for Subtraction\n(*) for Multiplication\n(/) for Division\n\n";
	cout << "Enter x: ";
	cin >> x;
	cout << "Enter y: ";
	cin >> y;
	cout << "Enter an operation sign: ";
	cin >> oper;

	Calculator A1;

		if (oper == '+' || oper == '-' || oper == '*' || oper == '/') {
			result = A1.Calculate(x, oper, y);
			cout << "The result of "<< x << oper << y << " is " << result << endl;
		}
		else {
			cout << "Enter a valid operator!" << endl;
		}

		return 0;
}