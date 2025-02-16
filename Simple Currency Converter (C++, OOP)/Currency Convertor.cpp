#include<iostream>
using namespace std;

class Currency{
public:
	int C;
	double A1, A2;

	void Money();
};

void Currency::Money() {

	cout << "Convert your money from Egyptian Pounds into another currency:-" << endl << "(1) for United Arab Emirates Dirham" << endl
		<< "(2) for United States Dollar" << endl << "(3) for Japanese Yen" << endl << "(4) for Chinese Yuan" << endl << "(5) for Euro" << endl
		<< "(6) for Turkish Lira" << endl << "(7) for Saudi Riyal" << endl << "(8) for Russian Ruble" << endl << "(9) for Malaysian Ringgit" << endl
		<< "(10) for Indonesian Rupiah" << endl << endl;

	for (;;) {

		cout << "Currency: ";
		cin >> C;

		if (C > 10) {

			cout << endl << "Please, Try Again!!" << endl << endl;
		}
		else {

			switch(C){
			case 1:

				cout << "Enter The Amount Of Money: ";
				cin >> A1;
				A2 = A1 * 0.075;
				cout << endl << endl << "Your amount of money " << A1 << " LE. equal " << A2 << " United Arab Emirates Dirham" << endl;
				break;
			case 2:

				cout << "Enter The Amount Of Money: ";
				cin >> A1;
				A2 = A1 * 0.020;
				cout << endl << endl << "Your amount of money " << A1 << " LE. equal " << A2 << " United States Dollar" << endl;
				break;
			case 3:

				cout << "Enter The Amount Of Money: ";
				cin >> A1;
				A2 = A1 * 2.97;
				cout << endl << endl << "Your amount of money " << A1 << " LE. equal " << A2 << " Japanese Yen" << endl;
				break;
			case 4:

				cout << "Enter The Amount Of Money: ";
				cin >> A1;
				A2 = A1 * 0.15;
				cout << endl << endl << "Your amount of money " << A1 << " LE. equal " << A2 << " Chineses Yuan" << endl;
				break;
			case 5:

				cout << "Enter The Amount Of Money: ";
				cin >> A1;
				A2 = A1 * 0.019;
				cout << endl << endl << "Your amount of money " << A1 << " LE. equal " << A2 << " Euro" << endl;
				break;
			case 6:

				cout << "Enter The Amount Of Money: ";
				cin >> A1;
				A2 = A1 * 0.68;
				cout << endl << endl << "Your amount of money " << A1 << " LE. equal " << A2 << " Turkish Lira" << endl;
				break;
			case 7:

				cout << "Enter The Amount Of Money: ";
				cin >> A1;
				A2 = A1 * 0.076;
				cout << endl << endl << "Your amount of money " << A1 << " LE. equal " << A2 << " Saudi Riyal" << endl;
				break;
			case 8:

				cout << "Enter The Amount Of Money: ";
				cin >> A1;
				A2 = A1 * 1.77;
				cout << endl << endl << "Your amount of money " << A1 << " LE. equal " << A2 << " Rusian Ruble" << endl;
				break;
			case 9:

				cout << "Enter The Amount Of Money: ";
				cin >> A1;
				A2 = A1 * 0.091;
				cout << endl << endl << "Your amount of money " << A1 << " LE. equal " << A2 << " Malaysian Ringgit" << endl;
				break;
			case 10:

				cout << "Enter The Amount Of Money: ";
				cin >> A1;
				A2 = A1 * 322.84;
				cout << endl << endl << "Your amount of money " << A1 << " LE. equal " << A2 << " Indonesian Rupiah" << endl;
				break;
			}
			break;
		}
	}
}

int main() {

	Currency A;

	A.Money();

	return 0;
}