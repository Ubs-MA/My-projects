                                                                          //Pizza Restaurant Project
#include <iostream>
using namespace std;
class Restaurant {
public:
	void greet() {
		cout << "                                   *************************                                    " << endl;
		cout << "***********************************Welcome To Our Restaurant***********************************" << endl << endl;
		cout << "                                   #########################                                    " << endl << endl << endl;
	}
	void TypeOfService() {
		cout << " Please Choose The Type Of Service :" << endl;
		cout << " For  '' Dine In ''  Enter ( 1 )" << endl;
		cout << " For  '' Take Away ''  Enter ( 2 )" << endl;
		cout << " For  '' Dilevery ''  Enter ( 3 )" << endl;
	}
	void Area(int x) {
		if (x == 1) {
			cout << " Go Right To The Single Area" << endl << endl;
		}
		else if (x == 2) {
			cout << " Go Left To The Couples Area" << endl << endl;
		}
		else if (x == 3) {
			cout << " Go Down To The Family Area" << endl << endl;
		}
		else if (x == 4) {
			cout << " Go Up To The Friends Area" << endl << endl;
		}
		else
			cout << "Try Again \a" << endl;
	}
	void MenuIndexies() {
		cout << "           *******The Menu*******" << endl << endl
			<< "****Salads****" << endl
			<< "(1) Green Salad      20 L.E" << endl
			<< "(2) Greek Salad      30 L.E" << endl
			<< "(3) Ceaser Salad     60 L.E" << endl
			<< "(4) Coleslaw Salad   20 L.E" << endl << endl
			<< "****Pizzas****" << endl
			<< "(1) Margarita Pizza : Small  (80 L.E)  / Medium  (110 L.E)  / Large  (150 L.E) " << endl
			<< "(2) Mix Of Cheeses Pizza : Small  (80 L.E)  / Medium  (110 L.E)  / Large  (140 L.E) " << endl
			<< "(3) Vegetables Pizza : Small  (100 L.E)  / Medium  (130 L.E)  / Large  (160 L.E) " << endl
			<< "(4) Pepperoni Pizza : Small  (110 L.E)  / Medium  (140 L.E)  / Large  (170 L.E) " << endl
			<< "(5) Meat Pizza : Small  (130 L.E)  / Medium  (160 L.E)  / Large  (200 L.E) " << endl
			<< "(6) Chicken Pizza : Small  (115 L.E)  / Medium  (145 L.E)  / Large  (185 L.E) " << endl
			<< "(7) SeaFood Pizza : Small  (170 L.E)  / Medium  (210 L.E)  / Large  (250 L.E) " << endl
			<< "****Appetizers****" << endl
			<< " Garlic Bread    (40 L.E) / Potato Wedges    (40 L.E) / Chicken Wings    (60 L.E) / Chicken Spin Rolls    (60 L.E)" << endl
			<< "****Sauces****" << endl
			<< " Ranch Sauce    (20 L.E) / Ketchup Sauce    (20 L.E) / Barbecue    (20 L.E) / Honey Mustard Sauce    (20 L.E) / Thai Chili Sauce    (20 L.E) / Jalapeno Sauce    (20 L.E)" << endl
			<< "****Beverages****" << endl
			<< " Water   10 L.E / Pepsi   10 L.E / Tea   30L.E / Orange Juice   60L.E / Coffee   60L.E / Mango Juice   60 L.E" << endl
			<< "****Desserts****" << endl
			<< " Molten Cake     100 L.E / Red Velvet Cake     150 L.E / Chocolate Cake     100 L.E / Cheese Cake     100 L.E / Lotus Cake     100 L.E / Vanilla Cake     100 L.E" << endl << endl << endl;
	}
};


string Service[3] = { "Your Service Type Is Dine In","Your Service Type Is Take Away","Your Service Type Is Dilevery" };

// Menu Indexies And Prices Function 



// Salads

string Salads[4] = { "Green Salad","Greek Salad","Ceaser Salad","Coleslaw" };
int SaladsPrices[4] = { 20,30,60,20 };
int SaladsQuantities[4];
int SaladsRecieptSummation(int w, int x, int y, int z) {
    return w + x + y + z;
}

    // Reciept

int TotalReciept(int a, int b, int c, int d, int e, int f) {
	return a + b + c + d + e + f ;
}
int Reciept(int x, int y) {
	return x * y;
}

    // Pizzas

string Pizzas[21] =
{ "Small Margarita Pizza","Medium Margarita Pizza","Large Margarita Pizza",
"Small Mix Of Cheeses Pizza","Medium Mix Of Cheeses Pizza","Large Mix Of Cheeses Pizza",
"Small Vegetables Pizza","Medium Vegetables Pizza","Large Vegetables Pizza",
"Small Pepperoni Pizza","Medium Pepperoni Pizza","Large Pepperoni Pizza",
"Small Meat Pizza","Medium Meat Pizza","Large Meat Pizza",
"Small Chicken Pizza","Medium Chicken Pizza","Large Chicken Pizza",
"Small SeaFood Pizza","Medium SeaFood Pizza","Large SeaFood Pizza" };
int PizzasPrices[21] = { 80,110,150,   80,110,140,   100,130,160,   110,140,170,   130,160,200,   115,145,185,   170,210,250 };
int PizzasQuantities[21];
int PizzasRecieptSummation(int a, int b, int c, int d, int e, int f, int g, int h, int i, int j,
	int k, int l, int m, int n, int o, int p, int q, int r, int s, int t, int u) {
	return a + b + c + d + e + f + g + h + i + j + k + l + m + n + o + p + q + r + s + t + u;
}

    // Appetizers

int AppetizersRecieptSummation(int a, int b, int c, int d) {
	return a + b + c + d;
}
int AppetizersPrices[4] = { 40,40,60,60 };
int AppetizersQuantities[4];
string Appetizers[4] =
{ "Garlic Bread","Potato Wedges","Chicken Wings","Chickin Spin Rolls" };

    // Sauces

int SaucesRecieptSummation(int a, int b, int c, int d, int e, int f) {
	return a + b + c + d + e + f;
}
int SaucesPrices[1] = { 20 };
int SaucesQuantities[6];
string Sauces[6] = { "Ranch Sauce","Ketchup Sauce","Barbecue Sauce","Honey Mustard Sauce","Thai Chili Sauce","Jalapeno Sauce" };

    // Beverages

int BeveragesRecieptSummation(int a, int b, int c, int d, int e, int g) {
	return a + b + c + d + e + g;
}
int BeveragesPrices[6] = { 10,10,30,60,60,60 };
int BeveragesQuantities[6];
string Beverages[6] = { "Water","Pepsi","Tea","Orange Juice","Coffee","Mango Juice" };

    // Desserts

int DessertsRecieptSummation(int z, int b, int c, int d, int e, int g) {
	return z + b + c + d + e + g;
}
int DessertsPrices[6] = { 100,150,100,100,100,100 };
int DessertsQuantities[6];
string Desserts[6] = { "Molten Cake","Red Velvet Cake","Chocolate Cake","Cheese Cake","Lotus Cake","Vanilla Cake" };

    // Main Function

int main() {
	Restaurant client1;

	client1.greet();
	client1.TypeOfService();

    // Declarations

	int service, z, PhoneNumber, Rate;
	char salad, pizza, appetizer, sauce, beverage, dessert;
	string Name, Address;


	cin >> service;
	if (service == 1) {
		cout << Service[0] << endl;
		cout << " Please Enter Your Name" << endl;
		cin >> Name;
		cout << " Choose An Area" << endl << " Single Area / Couple Area / Family Area / Freinds Area " << endl
			<< " For 'Single Area' Choose ' 1 ' " << endl << " For 'Couple Area' Choose ' 2 ' " << endl
			<< " For 'Family Area' Choose ' 3 ' " << endl << " For 'Friends Area' Choose ' 4 ' " << endl;
		cin >> z;
		client1.Area(z);
	}
	else if (service == 2) {
		cout << Service[1] << endl;
		cout << " Please Enter Your Name" << endl;
		cin >> Name;
	}
	else if (service == 3) {
		cout << Service[2] << endl;
		cout << " Please Enter Your Name" << endl;
		cin >> Name;
		cout << " Please enter Your Phone Number" << endl;
		cin >> PhoneNumber;
		cout << " Please Enter Your Address" << endl;
		cin >> Address;
	}
	else
		cout << " Try Again! \a" << endl;

	client1.MenuIndexies();

	// Salads

	cout << " Do You Want " << Salads[0] << " ? " << endl
		<< " If YES Enter 'y' " << endl
		<< " If NO Enter 'n' " << endl;
	cin >> salad;
	if (salad == 'y') {
		cout << " Enter The Quantity : ";
		cin >> SaladsQuantities[0];
		cout << " You Ordered " << SaladsQuantities[0] << " Plates Of " << Salads[0] << endl << endl;
		cout << " Do You Want " << Salads[1] << " ? " << endl
			<< " If YES Enter 'y' " << endl
			<< " If NO Enter 'n' " << endl;
	}
	else {
		cout << " Do You Want " << Salads[1] << " ? " << endl
			<< " If YES Enter 'y' " << endl
			<< " If NO Enter 'n' " << endl;
	}
	cin >> salad;
	if (salad == 'y') {
		cout << " Enter The Quantity : ";
		cin >> SaladsQuantities[1];
		cout << " You Ordered " << SaladsQuantities[1] << " Plates Of " << Salads[1] << endl << endl;
		cout << " Do You Want " << Salads[2] << " ? " << endl
			<< " If YES Enter 'y' " << endl
			<< " If NO Enter 'n' " << endl;
	}
	else {
		cout << " Do You Want " << Salads[2] << " ? " << endl
			<< " If YES Enter 'y' " << endl
			<< " If NO Enter 'n' " << endl;
	}
	cin >> salad;
	if (salad == 'y') {
		cout << " Enter The Quantity : ";
		cin >> SaladsQuantities[2];
		cout << " You Ordered " << SaladsQuantities[2] << " Plates Of " << Salads[2] << endl << endl;
		cout << " Do You Want " << Salads[3] << " ? " << endl
			<< " If YES Enter 'y' " << endl
			<< " If NO Enter 'n' " << endl;
	}
	else {
		cout << " Do You Want " << Salads[3] << " ? " << endl
			<< " If YES Enter 'y' " << endl
			<< " If NO Enter 'n' " << endl;
	}
	cin >> salad;
	if (salad == 'y') {
		cout << " Enter The Quantity : ";
		cin >> SaladsQuantities[3];
		cout << " You Ordered " << SaladsQuantities[3] << " Plates Of " << Salads[3] << endl << endl << endl;
	}
	cout << " You Ordered " << SaladsQuantities[0] << " Plates Of " << Salads[0] << " Each Costs = " << SaladsPrices[0] << " L.E" << endl;
	cout << " You Ordered " << SaladsQuantities[1] << " Plates Of " << Salads[1] << " Each Costs = " << SaladsPrices[1] << " L.E" << endl;
	cout << " You Ordered " << SaladsQuantities[2] << " Plates Of " << Salads[2] << " Each Costs = " << SaladsPrices[2] << " L.E" << endl;
	cout << " You Ordered " << SaladsQuantities[3] << " Plates Of " << Salads[3] << " Each Costs = " << SaladsPrices[3] << " L.E" << endl;
	cout << " Salads Total Prices = " << Reciept(SaladsQuantities[0], SaladsPrices[0]) << " + "
		<< Reciept(SaladsQuantities[1], SaladsPrices[1]) << " + "
		<< Reciept(SaladsQuantities[2], SaladsPrices[2]) << " + "
		<< Reciept(SaladsQuantities[3], SaladsPrices[3]) << " = "
		<< SaladsRecieptSummation(
			Reciept(SaladsQuantities[0], SaladsPrices[0]),
			Reciept(SaladsQuantities[1], SaladsPrices[1]),
			Reciept(SaladsQuantities[2], SaladsPrices[2]),
			Reciept(SaladsQuantities[3], SaladsPrices[3])) << " L.E" << endl << endl << endl;

	// Pizzas

	cout << " Do You Want " << Pizzas[0] << " ? " << endl
		<< " If YES Enter 'y' " << endl
		<< " If NO Enter 'n' " << endl;
	cin >> pizza;
	if (pizza == 'y') {
		cout << " Enter The Quantity : ";
		cin >> PizzasQuantities[0];
		cout << " You Ordered " << PizzasQuantities[0] << " Plates Of " << Pizzas[0] << endl << endl;
		cout << " Do You Want " << Pizzas[1] << " ? " << endl
			<< " If YES Enter 'y' " << endl
			<< " If NO Enter 'n' " << endl;
	}
	else {
		cout << " Do You Want " << Pizzas[1] << " ? " << endl
			<< " If YES Enter 'y' " << endl
			<< " If NO Enter 'n' " << endl;
	}
	cin >> pizza;
	if (pizza == 'y') {
		cout << " Enter The Quantity : ";
		cin >> PizzasQuantities[1];
		cout << " You Ordered " << PizzasQuantities[1] << " Plates Of " << Pizzas[1] << endl << endl;
		cout << " Do You Want " << Pizzas[2] << " ? " << endl
			<< " If YES Enter 'y' " << endl
			<< " If NO Enter 'n' " << endl;
	}
	else {
		cout << " Do You Want " << Pizzas[2] << " ? " << endl
			<< " If YES Enter 'y' " << endl
			<< " If NO Enter 'n' " << endl;
	}
	cin >> pizza;
	if (pizza == 'y') {
		cout << " Enter The Quantity : ";
		cin >> PizzasQuantities[2];
		cout << " You Ordered " << PizzasQuantities[2] << " Plates Of " << Pizzas[2] << endl << endl;
		cout << " Do You Want " << Pizzas[3] << " ? " << endl
			<< " If YES Enter 'y' " << endl
			<< " If NO Enter 'n' " << endl;
	}
	else {
		cout << " Do You Want " << Pizzas[3] << " ? " << endl
			<< " If YES Enter 'y' " << endl
			<< " If NO Enter 'n' " << endl;
	}
	cin >> pizza;
	if (pizza == 'y') {
		cout << " Enter The Quantity : ";
		cin >> PizzasQuantities[3];
		cout << " You Ordered " << PizzasQuantities[3] << " Plates Of " << Pizzas[3] << endl << endl;
		cout << " Do You Want " << Pizzas[4] << " ? " << endl
			<< " If YES Enter 'y' " << endl
			<< " If NO Enter 'n' " << endl;
	}
	else {
		cout << " Do You Want " << Pizzas[4] << " ? " << endl
			<< " If YES Enter 'y' " << endl
			<< " If NO Enter 'n' " << endl;
	}
	cin >> pizza;
	if (pizza == 'y') {
		cout << " Enter The Quantity : ";
		cin >> PizzasQuantities[4];
		cout << " You Ordered " << PizzasQuantities[4] << " Plates Of " << Pizzas[4] << endl << endl;
		cout << " Do You Want " << Pizzas[5] << " ? " << endl
			<< " If YES Enter 'y' " << endl
			<< " If NO Enter 'n' " << endl;
	}
	else {
		cout << " Do You Want " << Pizzas[5] << " ? " << endl
			<< " If YES Enter 'y' " << endl
			<< " If NO Enter 'n' " << endl;
	}
	cin >> pizza;
	if (pizza == 'y') {
		cout << " Enter The Quantity : ";
		cin >> PizzasQuantities[5];
		cout << " You Ordered " << PizzasQuantities[5] << " Plates Of " << Pizzas[5] << endl << endl;
		cout << " Do You Want " << Pizzas[6] << " ? " << endl
			<< " If YES Enter 'y' " << endl
			<< " If NO Enter 'n' " << endl;
	}
	else {
		cout << " Do You Want " << Pizzas[6] << " ? " << endl
			<< " If YES Enter 'y' " << endl
			<< " If NO Enter 'n' " << endl;
	}
	cin >> pizza;
	if (pizza == 'y') {
		cout << " Enter The Quantity : ";
		cin >> PizzasQuantities[6];
		cout << " You Ordered " << PizzasQuantities[6] << " Plates Of " << Pizzas[6] << endl << endl;
		cout << " Do You Want " << Pizzas[7] << " ? " << endl
			<< " If YES Enter 'y' " << endl
			<< " If NO Enter 'n' " << endl;
	}
	else {
		cout << " Do You Want " << Pizzas[7] << " ? " << endl
			<< " If YES Enter 'y' " << endl
			<< " If NO Enter 'n' " << endl;
	}
	cin >> pizza;
	if (pizza == 'y') {
		cout << " Enter The Quantity : ";
		cin >> PizzasQuantities[7];
		cout << " You Ordered " << PizzasQuantities[7] << " Plates Of " << Pizzas[7] << endl << endl;
		cout << " Do You Want " << Pizzas[8] << " ? " << endl
			<< " If YES Enter 'y' " << endl
			<< " If NO Enter 'n' " << endl;
	}
	else {
		cout << " Do You Want " << Pizzas[8] << " ? " << endl
			<< " If YES Enter 'y' " << endl
			<< " If NO Enter 'n' " << endl;
	}
	cin >> pizza;
	if (pizza == 'y') {
		cout << " Enter The Quantity : ";
		cin >> PizzasQuantities[8];
		cout << " You Ordered " << PizzasQuantities[8] << " Plates Of " << Pizzas[8] << endl << endl;
		cout << " Do You Want " << Pizzas[9] << " ? " << endl
			<< " If YES Enter 'y' " << endl
			<< " If NO Enter 'n' " << endl;
	}
	else {
		cout << " Do You Want " << Pizzas[9] << " ? " << endl
			<< " If YES Enter 'y' " << endl
			<< " If NO Enter 'n' " << endl;
	}
	cin >> pizza;
	if (pizza == 'y') {
		cout << " Enter The Quantity : ";
		cin >> PizzasQuantities[9];
		cout << " You Ordered " << PizzasQuantities[9] << " Plates Of " << Pizzas[9] << endl << endl;
		cout << " Do You Want " << Pizzas[10] << " ? " << endl
			<< " If YES Enter 'y' " << endl
			<< " If NO Enter 'n' " << endl;
	}
	else {
		cout << " Do You Want " << Pizzas[10] << " ? " << endl
			<< " If YES Enter 'y' " << endl
			<< " If NO Enter 'n' " << endl;
	}
	cin >> pizza;
	if (pizza == 'y') {
		cout << " Enter The Quantity : ";
		cin >> PizzasQuantities[10];
		cout << " You Ordered " << PizzasQuantities[10] << " Plates Of " << Pizzas[10] << endl << endl;
		cout << " Do You Want " << Pizzas[11] << " ? " << endl
			<< " If YES Enter 'y' " << endl
			<< " If NO Enter 'n' " << endl;
	}
	else {
		cout << " Do You Want " << Pizzas[11] << " ? " << endl
			<< " If YES Enter 'y' " << endl
			<< " If NO Enter 'n' " << endl;
	}
	cin >> pizza;
	if (pizza == 'y') {
		cout << " Enter The Quantity : ";
		cin >> PizzasQuantities[11];
		cout << " You Ordered " << PizzasQuantities[11] << " Plates Of " << Pizzas[11] << endl << endl;
		cout << " Do You Want " << Pizzas[12] << " ? " << endl
			<< " If YES Enter 'y' " << endl
			<< " If NO Enter 'n' " << endl;
	}
	else {
		cout << " Do You Want " << Pizzas[12] << " ? " << endl
			<< " If YES Enter 'y' " << endl
			<< " If NO Enter 'n' " << endl;
	}
	cin >> pizza;
	if (pizza == 'y') {
		cout << " Enter The Quantity : ";
		cin >> PizzasQuantities[12];
		cout << " You Ordered " << PizzasQuantities[12] << " Plates Of " << Pizzas[12] << endl << endl;
		cout << " Do You Want " << Pizzas[13] << " ? " << endl
			<< " If YES Enter 'y' " << endl
			<< " If NO Enter 'n' " << endl;
	}
	else {
		cout << " Do You Want " << Pizzas[13] << " ? " << endl
			<< " If YES Enter 'y' " << endl
			<< " If NO Enter 'n' " << endl;
	}
	cin >> pizza;
	if (pizza == 'y') {
		cout << " Enter The Quantity : ";
		cin >> PizzasQuantities[13];
		cout << " You Ordered " << PizzasQuantities[13] << " Plates Of " << Pizzas[13] << endl << endl;
		cout << " Do You Want " << Pizzas[14] << " ? " << endl
			<< " If YES Enter 'y' " << endl
			<< " If NO Enter 'n' " << endl;
	}
	else {
		cout << " Do You Want " << Pizzas[14] << " ? " << endl
			<< " If YES Enter 'y' " << endl
			<< " If NO Enter 'n' " << endl;
	}
	cin >> pizza;
	if (pizza == 'y') {
		cout << " Enter The Quantity : ";
		cin >> PizzasQuantities[14];
		cout << " You Ordered " << PizzasQuantities[14] << " Plates Of " << Pizzas[14] << endl << endl;
		cout << " Do You Want " << Pizzas[15] << " ? " << endl
			<< " If YES Enter 'y' " << endl
			<< " If NO Enter 'n' " << endl;
	}
	else {
		cout << " Do You Want " << Pizzas[15] << " ? " << endl
			<< " If YES Enter 'y' " << endl
			<< " If NO Enter 'n' " << endl;
	}
	cin >> pizza;
	if (pizza == 'y') {
		cout << " Enter The Quantity : ";
		cin >> PizzasQuantities[15];
		cout << " You Ordered " << PizzasQuantities[15] << " Plates Of " << Pizzas[15] << endl << endl;
		cout << " Do You Want " << Pizzas[16] << " ? " << endl
			<< " If YES Enter 'y' " << endl
			<< " If NO Enter 'n' " << endl;
	}
	else {
		cout << " Do You Want " << Pizzas[16] << " ? " << endl
			<< " If YES Enter 'y' " << endl
			<< " If NO Enter 'n' " << endl;
	}
	cin >> pizza;
	if (pizza == 'y') {
		cout << " Enter The Quantity : ";
		cin >> PizzasQuantities[16];
		cout << " You Ordered " << PizzasQuantities[16] << " Plates Of " << Pizzas[16] << endl << endl;
		cout << " Do You Want " << Pizzas[17] << " ? " << endl
			<< " If YES Enter 'y' " << endl
			<< " If NO Enter 'n' " << endl;
	}
	else {
		cout << " Do You Want " << Pizzas[17] << " ? " << endl
			<< " If YES Enter 'y' " << endl
			<< " If NO Enter 'n' " << endl;
	}
	cin >> pizza;
	if (pizza == 'y') {
		cout << " Enter The Quantity : ";
		cin >> PizzasQuantities[17];
		cout << " You Ordered " << PizzasQuantities[17] << " Plates Of " << Pizzas[17] << endl << endl;
		cout << " Do You Want " << Pizzas[18] << " ? " << endl
			<< " If YES Enter 'y' " << endl
			<< " If NO Enter 'n' " << endl;
	}
	else {
		cout << " Do You Want " << Pizzas[18] << " ? " << endl
			<< " If YES Enter 'y' " << endl
			<< " If NO Enter 'n' " << endl;
	}
	cin >> pizza;
	if (pizza == 'y') {
		cout << " Enter The Quantity : ";
		cin >> PizzasQuantities[18];
		cout << " You Ordered " << PizzasQuantities[18] << " Plates Of " << Pizzas[18] << endl << endl;
		cout << " Do You Want " << Pizzas[19] << " ? " << endl
			<< " If YES Enter 'y' " << endl
			<< " If NO Enter 'n' " << endl;
	}
	else {
		cout << " Do You Want " << Pizzas[19] << " ? " << endl
			<< " If YES Enter 'y' " << endl
			<< " If NO Enter 'n' " << endl;
	}
	cin >> pizza;
	if (pizza == 'y') {
		cout << " Enter The Quantity : ";
		cin >> PizzasQuantities[19];
		cout << " You Ordered " << PizzasQuantities[19] << " Plates Of " << Pizzas[19] << endl << endl;
		cout << " Do You Want " << Pizzas[20] << " ? " << endl
			<< " If YES Enter 'y' " << endl
			<< " If NO Enter 'n' " << endl;
	}
	else {
		cout << " Do You Want " << Pizzas[20] << " ? " << endl
			<< " If YES Enter 'y' " << endl
			<< " If NO Enter 'n' " << endl;
	}
	cin >> pizza;
	if (pizza == 'y') {
		cout << " Enter The Quantity : ";
		cin >> PizzasQuantities[20];
		cout << " You Ordered " << PizzasQuantities[20] << " Plates Of " << Pizzas[20] << endl << endl << endl;
	}
	cout << " You Ordered " << PizzasQuantities[0] << " Plates Of " << Pizzas[0] << " Each Costs = " << PizzasPrices[0] << " L.E" << endl;
	cout << " You Ordered " << PizzasQuantities[1] << " Plates Of " << Pizzas[1] << " Each Costs = " << PizzasPrices[1] << " L.E" << endl;
	cout << " You Ordered " << PizzasQuantities[2] << " Plates Of " << Pizzas[2] << " Each Costs = " << PizzasPrices[2] << " L.E" << endl;
	cout << " You Ordered " << PizzasQuantities[3] << " Plates Of " << Pizzas[3] << " Each Costs = " << PizzasPrices[3] << " L.E" << endl;
	cout << " You Ordered " << PizzasQuantities[4] << " Plates Of " << Pizzas[4] << " Each Costs = " << PizzasPrices[4] << " L.E" << endl;
	cout << " You Ordered " << PizzasQuantities[5] << " Plates Of " << Pizzas[5] << " Each Costs = " << PizzasPrices[5] << " L.E" << endl;
	cout << " You Ordered " << PizzasQuantities[6] << " Plates Of " << Pizzas[6] << " Each Costs = " << PizzasPrices[6] << " L.E" << endl;
	cout << " You Ordered " << PizzasQuantities[7] << " Plates Of " << Pizzas[7] << " Each Costs = " << PizzasPrices[7] << " L.E" << endl;
	cout << " You Ordered " << PizzasQuantities[8] << " Plates Of " << Pizzas[8] << " Each Costs = " << PizzasPrices[8] << " L.E" << endl;
	cout << " You Ordered " << PizzasQuantities[9] << " Plates Of " << Pizzas[9] << " Each Costs = " << PizzasPrices[9] << " L.E" << endl;
	cout << " You Ordered " << PizzasQuantities[10] << " Plates Of " << Pizzas[10] << " Each Costs = " << PizzasPrices[10] << " L.E" << endl;
	cout << " You Ordered " << PizzasQuantities[11] << " Plates Of " << Pizzas[11] << " Each Costs = " << PizzasPrices[11] << " L.E" << endl;
	cout << " You Ordered " << PizzasQuantities[12] << " Plates Of " << Pizzas[12] << " Each Costs = " << PizzasPrices[12] << " L.E" << endl;
	cout << " You Ordered " << PizzasQuantities[13] << " Plates Of " << Pizzas[13] << " Each Costs = " << PizzasPrices[13] << " L.E" << endl;
	cout << " You Ordered " << PizzasQuantities[14] << " Plates Of " << Pizzas[14] << " Each Costs = " << PizzasPrices[14] << " L.E" << endl;
	cout << " You Ordered " << PizzasQuantities[15] << " Plates Of " << Pizzas[15] << " Each Costs = " << PizzasPrices[15] << " L.E" << endl;
	cout << " You Ordered " << PizzasQuantities[16] << " Plates Of " << Pizzas[16] << " Each Costs = " << PizzasPrices[16] << " L.E" << endl;
	cout << " You Ordered " << PizzasQuantities[17] << " Plates Of " << Pizzas[17] << " Each Costs = " << PizzasPrices[17] << " L.E" << endl;
	cout << " You Ordered " << PizzasQuantities[18] << " Plates Of " << Pizzas[18] << " Each Costs = " << PizzasPrices[18] << " L.E" << endl;
	cout << " You Ordered " << PizzasQuantities[19] << " Plates Of " << Pizzas[19] << " Each Costs = " << PizzasPrices[19] << " L.E" << endl;
	cout << " You Ordered " << PizzasQuantities[20] << " Plates Of " << Pizzas[20] << " Each Costs = " << PizzasPrices[20] << " L.E" << endl;
	cout << " Salads Total Prices = " << Reciept(PizzasQuantities[0], PizzasPrices[0]) << " + "
		<< Reciept(PizzasQuantities[1], PizzasPrices[1]) << " + "
		<< Reciept(PizzasQuantities[2], PizzasPrices[2]) << " + "
		<< Reciept(PizzasQuantities[3], PizzasPrices[3]) << " + "
		<< Reciept(PizzasQuantities[4], PizzasPrices[4]) << " + "
		<< Reciept(PizzasQuantities[5], PizzasPrices[5]) << " + "
		<< Reciept(PizzasQuantities[6], PizzasPrices[6]) << " + "
		<< Reciept(PizzasQuantities[7], PizzasPrices[7]) << " + "
		<< Reciept(PizzasQuantities[8], PizzasPrices[8]) << " + "
		<< Reciept(PizzasQuantities[9], PizzasPrices[9]) << " + " << endl
		<< Reciept(PizzasQuantities[10], PizzasPrices[10]) << " + "
		<< Reciept(PizzasQuantities[11], PizzasPrices[11]) << " + "
		<< Reciept(PizzasQuantities[12], PizzasPrices[12]) << " + "
		<< Reciept(PizzasQuantities[13], PizzasPrices[13]) << " + "
		<< Reciept(PizzasQuantities[14], PizzasPrices[14]) << " + "
		<< Reciept(PizzasQuantities[15], PizzasPrices[15]) << " + "
		<< Reciept(PizzasQuantities[16], PizzasPrices[16]) << " + "
		<< Reciept(PizzasQuantities[17], PizzasPrices[17]) << " + "
		<< Reciept(PizzasQuantities[18], PizzasPrices[18]) << " + "
		<< Reciept(PizzasQuantities[19], PizzasPrices[19]) << " + "
		<< Reciept(PizzasQuantities[20], PizzasPrices[20]) << " = "
		<< PizzasRecieptSummation(
			Reciept(PizzasQuantities[0], PizzasPrices[0]), Reciept(PizzasQuantities[1], PizzasPrices[1]),
			Reciept(PizzasQuantities[2], PizzasPrices[2]), Reciept(PizzasQuantities[3], PizzasPrices[3]),
			Reciept(PizzasQuantities[4], PizzasPrices[4]), Reciept(PizzasQuantities[5], PizzasPrices[5]),
			Reciept(PizzasQuantities[6], PizzasPrices[6]), Reciept(PizzasQuantities[7], PizzasPrices[7]),
			Reciept(PizzasQuantities[8], PizzasPrices[8]), Reciept(PizzasQuantities[9], PizzasPrices[9]),
			Reciept(PizzasQuantities[10], PizzasPrices[10]), Reciept(PizzasQuantities[11], PizzasPrices[11]),
			Reciept(PizzasQuantities[12], PizzasPrices[12]), Reciept(PizzasQuantities[13], PizzasPrices[13]),
			Reciept(PizzasQuantities[14], PizzasPrices[14]), Reciept(PizzasQuantities[15], PizzasPrices[15]),
			Reciept(PizzasQuantities[16], PizzasPrices[16]), Reciept(PizzasQuantities[17], PizzasPrices[17]),
			Reciept(PizzasQuantities[18], PizzasPrices[18]), Reciept(PizzasQuantities[19], PizzasPrices[19]),
			Reciept(PizzasQuantities[20], PizzasPrices[20])) << " L.E" << endl << endl << endl;

	// Appetizers

	cout << " Do You Want " << Appetizers[0] << " ? " << endl
		<< " If YES Enter 'y' " << endl
		<< " If NO Enter 'n' " << endl;
	cin >> appetizer;
	if (appetizer == 'y') {
		cout << " Enter The Quantity : ";
		cin >> AppetizersQuantities[0];
		cout << " You Ordered " << AppetizersQuantities[0] << " Plates Of " << Appetizers[0] << endl << endl;
		cout << " Do You Want " << Appetizers[1] << " ? " << endl
			<< " If YES Enter 'y' " << endl
			<< " If NO Enter 'n' " << endl;
	}
	else {
		cout << " Do You Want " << Appetizers[1] << " ? " << endl
			<< " If YES Enter 'y' " << endl
			<< " If NO Enter 'n' " << endl;
	}
	cin >> appetizer;
	if (appetizer == 'y') {
		cout << " Enter The Quantity : ";
		cin >> AppetizersQuantities[1];
		cout << " You Ordered " << AppetizersQuantities[1] << " Plates Of " << Appetizers[1] << endl << endl;
		cout << " Do You Want " << Appetizers[2] << " ? " << endl
			<< " If YES Enter 'y' " << endl
			<< " If NO Enter 'n' " << endl;
	}
	else {
		cout << " Do You Want " << Appetizers[2] << " ? " << endl
			<< " If YES Enter 'y' " << endl
			<< " If NO Enter 'n' " << endl;
	}
	cin >> appetizer;
	if (appetizer == 'y') {
		cout << " Enter The Quantity : ";
		cin >> AppetizersQuantities[2];
		cout << " You Ordered " << AppetizersQuantities[2] << " Plates Of " << Appetizers[2] << endl << endl;
		cout << " Do You Want " << Appetizers[3] << " ? " << endl
			<< " If YES Enter 'y' " << endl
			<< " If NO Enter 'n' " << endl;
	}
	else {
		cout << " Do You Want " << Appetizers[3] << " ? " << endl
			<< " If YES Enter 'y' " << endl
			<< " If NO Enter 'n' " << endl;
	}
	cin >> appetizer;
	if (appetizer == 'y') {
		cout << " Enter The Quantity : ";
		cin >> AppetizersQuantities[3];
		cout << " You Ordered " << AppetizersQuantities[3] << " Plates Of " << Appetizers[3] << endl << endl << endl;
	}
	cout << " You Ordered " << AppetizersQuantities[0] << " Plates Of " << Appetizers[0] << " Each Costs = " << AppetizersPrices[0] << " L.E" << endl;
	cout << " You Ordered " << AppetizersQuantities[1] << " Plates Of " << Appetizers[1] << " Each Costs = " << AppetizersPrices[1] << " L.E" << endl;
	cout << " You Ordered " << AppetizersQuantities[2] << " Plates Of " << Appetizers[2] << " Each Costs = " << AppetizersPrices[2] << " L.E" << endl;
	cout << " You Ordered " << AppetizersQuantities[3] << " Plates Of " << Appetizers[3] << " Each Costs = " << AppetizersPrices[3] << " L.E" << endl;
	cout << " Salads Total Prices = " << Reciept(AppetizersQuantities[0], AppetizersPrices[0]) << " + "
		<< Reciept(AppetizersQuantities[1], AppetizersPrices[1]) << " + "
		<< Reciept(AppetizersQuantities[2], AppetizersPrices[2]) << " + "
		<< Reciept(AppetizersQuantities[3], AppetizersPrices[3]) << " = "
		<< AppetizersRecieptSummation(
			Reciept(AppetizersQuantities[0], AppetizersPrices[0]), Reciept(AppetizersQuantities[1], AppetizersPrices[1]),
			Reciept(AppetizersQuantities[2], AppetizersPrices[2]), Reciept(AppetizersQuantities[3], AppetizersPrices[3]))
		<< " L.E" << endl << endl << endl;

	// Sauces

	cout << " Do You Want " << Sauces[0] << " ? " << endl
		<< " If YES Enter 'y' " << endl
		<< " If NO Enter 'n' " << endl;
	cin >> sauce;
	if (sauce == 'y') {
		cout << " Enter The Quantity : ";
		cin >> SaucesQuantities[0];
		cout << " You Ordered " << SaucesQuantities[0] << " Backets Of " << Sauces[0] << endl << endl;
		cout << " Do You Want " << Sauces[1] << " ? " << endl
			<< " If YES Enter 'y' " << endl
			<< " If NO Enter 'n' " << endl;
	}
	else {
		cout << " Do You Want " << Sauces[1] << " ? " << endl
			<< " If YES Enter 'y' " << endl
			<< " If NO Enter 'n' " << endl;
	}
	cin >> sauce;
	if (sauce == 'y') {
		cout << " Enter The Quantity : ";
		cin >> SaucesQuantities[1];
		cout << " You Ordered " << SaucesQuantities[1] << " Backets Of " << Sauces[1] << endl << endl;
		cout << " Do You Want " << Sauces[2] << " ? " << endl
			<< " If YES Enter 'y' " << endl
			<< " If NO Enter 'n' " << endl;
	}
	else {
		cout << " Do You Want " << Sauces[2] << " ? " << endl
			<< " If YES Enter 'y' " << endl
			<< " If NO Enter 'n' " << endl;
	}
	cin >> sauce;
	if (sauce == 'y') {
		cout << " Enter The Quantity : ";
		cin >> SaucesQuantities[2];
		cout << " You Ordered " << SaucesQuantities[2] << " Backets Of " << Sauces[2] << endl << endl;
		cout << " Do You Want " << Sauces[3] << " ? " << endl
			<< " If YES Enter 'y' " << endl
			<< " If NO Enter 'n' " << endl;
	}
	else {
		cout << " Do You Want " << Sauces[3] << " ? " << endl
			<< " If YES Enter 'y' " << endl
			<< " If NO Enter 'n' " << endl;
	}
	cin >> sauce;
	if (sauce == 'y') {
		cout << " Enter The Quantity : ";
		cin >> SaucesQuantities[3];
		cout << " You Ordered " << SaucesQuantities[3] << " Backets Of " << Sauces[3] << endl << endl;
		cout << " Do You Want " << Sauces[4] << " ? " << endl
			<< " If YES Enter 'y' " << endl
			<< " If NO Enter 'n' " << endl;
	}
	else {
		cout << " Do You Want " << Sauces[4] << " ? " << endl
			<< " If YES Enter 'y' " << endl
			<< " If NO Enter 'n' " << endl;
	}
	cin >> sauce;
	if (sauce == 'y') {
		cout << " Enter The Quantity : ";
		cin >> SaucesQuantities[4];
		cout << " You Ordered " << SaucesQuantities[4] << " Backets Of " << Sauces[4] << endl << endl;
		cout << " Do You Want " << Sauces[5] << " ? " << endl
			<< " If YES Enter 'y' " << endl
			<< " If NO Enter 'n' " << endl;
	}
	else {
		cout << " Do You Want " << Sauces[5] << " ? " << endl
			<< " If YES Enter 'y' " << endl
			<< " If NO Enter 'n' " << endl;
	}
	cin >> sauce;
	if (sauce == 'y') {
		cout << " Enter The Quantity : ";
		cin >> SaucesQuantities[5];
		cout << " You Ordered " << SaucesQuantities[5] << " Backets Of " << Sauces[5] << endl << endl << endl;
	}
	cout << " You Ordered " << SaucesQuantities[0] << " Backets Of " << Sauces[0] << " Each Costs = " << SaucesPrices[0] << " L.E" << endl;
	cout << " You Ordered " << SaucesQuantities[1] << " Backets Of " << Sauces[1] << " Each Costs = " << SaucesPrices[0] << " L.E" << endl;
	cout << " You Ordered " << SaucesQuantities[2] << " Backets Of " << Sauces[2] << " Each Costs = " << SaucesPrices[0] << " L.E" << endl;
	cout << " You Ordered " << SaucesQuantities[3] << " Backets Of " << Sauces[3] << " Each Costs = " << SaucesPrices[0] << " L.E" << endl;
	cout << " You Ordered " << SaucesQuantities[4] << " Backets Of " << Sauces[4] << " Each Costs = " << SaucesPrices[0] << " L.E" << endl;
	cout << " You Ordered " << SaucesQuantities[5] << " Backets Of " << Sauces[5] << " Each Costs = " << SaucesPrices[0] << " L.E" << endl;

	cout << " Sauces Total Prices = " << Reciept(SaucesQuantities[0], SaucesPrices[0]) << " + "
		<< Reciept(SaucesQuantities[1], SaucesPrices[0]) << " + "
		<< Reciept(SaucesQuantities[2], SaucesPrices[0]) << " + "
		<< Reciept(SaucesQuantities[3], SaucesPrices[0]) << " + "
		<< Reciept(SaucesQuantities[4], SaucesPrices[0]) << " + "
		<< Reciept(SaucesQuantities[5], SaucesPrices[0]) << " = "
		<< SaucesRecieptSummation(
			Reciept(SaucesQuantities[0], SaucesPrices[0]), Reciept(SaucesQuantities[1], SaucesPrices[0]),
			Reciept(SaucesQuantities[2], SaucesPrices[0]), Reciept(SaucesQuantities[3], SaucesPrices[0]),
			Reciept(SaucesQuantities[4], SaucesPrices[0]), Reciept(SaucesQuantities[5], SaucesPrices[0])) << " L.E" << endl << endl << endl;

	// Beverages

	cout << " Do You Want " << Beverages[0] << " ? " << endl
		<< " If YES Enter 'y' " << endl
		<< " If NO Enter 'n' " << endl;
	cin >> beverage;
	if (beverage == 'y') {
		cout << " Enter The Quantity : ";
		cin >> BeveragesQuantities[0];
		cout << " You Ordered " << BeveragesQuantities[0] << " Bottles Of " << Beverages[0] << endl << endl;
		cout << " Do You Want " << Beverages[1] << " ? " << endl
			<< " If YES Enter 'y' " << endl
			<< " If NO Enter 'n' " << endl;
	}
	else {
		cout << " Do You Want " << Beverages[1] << " ? " << endl
			<< " If YES Enter 'y' " << endl
			<< " If NO Enter 'n' " << endl;
	}
	cin >> beverage;
	if (beverage == 'y') {
		cout << " Enter The Quantity : ";
		cin >> BeveragesQuantities[1];
		cout << " You Ordered " << BeveragesQuantities[1] << " Cans Of " << Beverages[1] << endl << endl;
		cout << " Do You Want " << Beverages[2] << " ? " << endl
			<< " If YES Enter 'y' " << endl
			<< " If NO Enter 'n' " << endl;
	}
	else {
		cout << " Do You Want " << Beverages[2] << " ? " << endl
			<< " If YES Enter 'y' " << endl
			<< " If NO Enter 'n' " << endl;
	}
	cin >> beverage;
	if (beverage == 'y') {
		cout << " Enter The Quantity : ";
		cin >> BeveragesQuantities[2];
		cout << " You Ordered " << BeveragesQuantities[2] << " Cups Of " << Beverages[2] << endl << endl;
		cout << " Do You Want " << Beverages[3] << " ? " << endl
			<< " If YES Enter 'y' " << endl
			<< " If NO Enter 'n' " << endl;
	}
	else {
		cout << " Do You Want " << Beverages[3] << " ? " << endl
			<< " If YES Enter 'y' " << endl
			<< " If NO Enter 'n' " << endl;
	}
	cin >> beverage;
	if (beverage == 'y') {
		cout << " Enter The Quantity : ";
		cin >> BeveragesQuantities[3];
		cout << " You Ordered " << BeveragesQuantities[3] << " Cups Of " << Beverages[3] << endl << endl;
		cout << " Do You Want " << Beverages[4] << " ? " << endl
			<< " If YES Enter 'y' " << endl
			<< " If NO Enter 'n' " << endl;
	}
	else {
		cout << " Do You Want " << Beverages[4] << " ? " << endl
			<< " If YES Enter 'y' " << endl
			<< " If NO Enter 'n' " << endl;
	}
	cin >> beverage;
	if (beverage == 'y') {
		cout << " Enter The Quantity : ";
		cin >> BeveragesQuantities[4];
		cout << " You Ordered " << BeveragesQuantities[4] << " Cups Of " << Beverages[4] << endl << endl;
		cout << " Do You Want " << Beverages[5] << " ? " << endl
			<< " If YES Enter 'y' " << endl
			<< " If NO Enter 'n' " << endl;
	}
	else {
		cout << " Do You Want " << Beverages[5] << " ? " << endl
			<< " If YES Enter 'y' " << endl
			<< " If NO Enter 'n' " << endl;
	}
	cin >> beverage;
	if (beverage == 'y') {
		cout << " Enter The Quantity : ";
		cin >> BeveragesQuantities[5];
		cout << " You Ordered " << BeveragesQuantities[5] << " Cups Of " << Beverages[5] << endl << endl << endl;
	}
	cout << " You Ordered " << BeveragesQuantities[0] << " Bottle Of " << Beverages[0] << " Each Costs = " << BeveragesPrices[0] << " L.E" << endl;
	cout << " You Ordered " << BeveragesQuantities[1] << " Cans Of " << Beverages[1] << " Each Costs = " << BeveragesPrices[1] << " L.E" << endl;
	cout << " You Ordered " << BeveragesQuantities[2] << " Cups Of " << Beverages[2] << " Each Costs = " << BeveragesPrices[2] << " L.E" << endl;
	cout << " You Ordered " << BeveragesQuantities[3] << " Cups Of " << Beverages[3] << " Each Costs = " << BeveragesPrices[3] << " L.E" << endl;
	cout << " You Ordered " << BeveragesQuantities[4] << " Cups Of " << Beverages[4] << " Each Costs = " << BeveragesPrices[4] << " L.E" << endl;
	cout << " You Ordered " << BeveragesQuantities[5] << " Cups Of " << Beverages[5] << " Each Costs = " << BeveragesPrices[5] << " L.E" << endl;
	cout << " Beverages Total Prices = " << Reciept(BeveragesQuantities[0], BeveragesPrices[0]) << " + "
		<< Reciept(BeveragesQuantities[1], BeveragesPrices[1]) << " + "
		<< Reciept(BeveragesQuantities[2], BeveragesPrices[2]) << " + "
		<< Reciept(BeveragesQuantities[3], BeveragesPrices[3]) << " + "
		<< Reciept(BeveragesQuantities[4], BeveragesPrices[4]) << " + "
		<< Reciept(BeveragesQuantities[5], BeveragesPrices[5]) << " = "
		<< BeveragesRecieptSummation(
			Reciept(BeveragesQuantities[0], BeveragesPrices[0]), Reciept(BeveragesQuantities[1], BeveragesPrices[1]),
			Reciept(BeveragesQuantities[2], BeveragesPrices[2]), Reciept(BeveragesQuantities[3], BeveragesPrices[3]),
			Reciept(BeveragesQuantities[4], BeveragesPrices[4]), Reciept(BeveragesQuantities[5], BeveragesPrices[5])) << " L.E" << endl << endl << endl;

	//Desserts

	cout << " Do You Want " << Desserts[0] << " ? " << endl
		<< " If YES Enter 'y' " << endl
		<< " If NO Enter 'n' " << endl;
	cin >> dessert;
	if (dessert == 'y') {
		cout << " Enter The Quantity : ";
		cin >> DessertsQuantities[0];
		cout << " You Ordered " << DessertsQuantities[0] << " Plates Of " << Desserts[0] << endl << endl;
		cout << " Do You Want " << Desserts[1] << " ? " << endl
			<< " If YES Enter 'y' " << endl
			<< " If NO Enter 'n' " << endl;
	}
	else {
		cout << " Do You Want " << Desserts[1] << " ? " << endl
			<< " If YES Enter 'y' " << endl
			<< " If NO Enter 'n' " << endl;
	}
	cin >> dessert;
	if (dessert == 'y') {
		cout << " Enter The Quantity : ";
		cin >> DessertsQuantities[1];
		cout << " You Ordered " << DessertsQuantities[1] << " Plates Of " << Desserts[1] << endl << endl;
		cout << " Do You Want " << Desserts[2] << " ? " << endl
			<< " If YES Enter 'y' " << endl
			<< " If NO Enter 'n' " << endl;
	}
	else {
		cout << " Do You Want " << Desserts[2] << " ? " << endl
			<< " If YES Enter 'y' " << endl
			<< " If NO Enter 'n' " << endl;
	}
	cin >> dessert;
	if (dessert == 'y') {
		cout << " Enter The Quantity : ";
		cin >> DessertsQuantities[2];
		cout << " You Ordered " << DessertsQuantities[2] << " Plates Of " << Desserts[2] << endl << endl;
		cout << " Do You Want " << Desserts[3] << " ? " << endl
			<< " If YES Enter 'y' " << endl
			<< " If NO Enter 'n' " << endl;
	}
	else {
		cout << " Do You Want " << Desserts[3] << " ? " << endl
			<< " If YES Enter 'y' " << endl
			<< " If NO Enter 'n' " << endl;
	}
	cin >> dessert;
	if (dessert == 'y') {
		cout << " Enter The Quantity : ";
		cin >> DessertsQuantities[3];
		cout << " You Ordered " << DessertsQuantities[3] << " Plates Of " << Desserts[3] << endl << endl;
		cout << " Do You Want " << Desserts[4] << " ? " << endl
			<< " If YES Enter 'y' " << endl
			<< " If NO Enter 'n' " << endl;
	}
	else {
		cout << " Do You Want " << Desserts[4] << " ? " << endl
			<< " If YES Enter 'y' " << endl
			<< " If NO Enter 'n' " << endl;
	}
	cin >> dessert;
	if (dessert == 'y') {
		cout << " Enter The Quantity : ";
		cin >> DessertsQuantities[4];
		cout << " You Ordered " << DessertsQuantities[4] << " Plates Of " << Desserts[4] << endl << endl;
		cout << " Do You Want " << Desserts[5] << " ? " << endl
			<< " If YES Enter 'y' " << endl
			<< " If NO Enter 'n' " << endl;
	}
	else {
		cout << " Do You Want " << Desserts[5] << " ? " << endl
			<< " If YES Enter 'y' " << endl
			<< " If NO Enter 'n' " << endl;
	}
	cin >> dessert;
	if (dessert == 'y') {
		cout << " Enter The Quantity : ";
		cin >> DessertsQuantities[5];
		cout << " You Ordered " << DessertsQuantities[5] << " Plates Of " << Desserts[5] << endl << endl << endl;
	}
	cout << " You Ordered " << DessertsQuantities[0] << " Plates Of " << Desserts[0] << " Each Costs = " << DessertsPrices[0] << " L.E" << endl;
	cout << " You Ordered " << DessertsQuantities[1] << " Plates Of " << Desserts[1] << " Each Costs = " << DessertsPrices[1] << " L.E" << endl;
	cout << " You Ordered " << DessertsQuantities[2] << " Plates Of " << Desserts[2] << " Each Costs = " << DessertsPrices[2] << " L.E" << endl;
	cout << " You Ordered " << DessertsQuantities[3] << " Plates Of " << Desserts[3] << " Each Costs = " << DessertsPrices[3] << " L.E" << endl;
	cout << " You Ordered " << DessertsQuantities[4] << " Plates Of " << Desserts[4] << " Each Costs = " << DessertsPrices[4] << " L.E" << endl;
	cout << " You Ordered " << DessertsQuantities[5] << " Plates Of " << Desserts[5] << " Each Costs = " << DessertsPrices[5] << " L.E" << endl;
	cout << " Desserts Total Prices = " << Reciept(DessertsQuantities[0], DessertsPrices[0]) << " + "
		<< Reciept(DessertsQuantities[1], DessertsPrices[1]) << " + "
		<< Reciept(DessertsQuantities[2], DessertsPrices[2]) << " + "
		<< Reciept(DessertsQuantities[3], DessertsPrices[3]) << " + "
		<< Reciept(DessertsQuantities[4], DessertsPrices[4]) << " + "
		<< Reciept(DessertsQuantities[5], DessertsPrices[5]) << " = "
		<< DessertsRecieptSummation(
			Reciept(DessertsQuantities[0], DessertsPrices[0]), Reciept(DessertsQuantities[1], DessertsPrices[1]),
			Reciept(DessertsQuantities[2], DessertsPrices[2]), Reciept(DessertsQuantities[3], DessertsPrices[3]),
			Reciept(DessertsQuantities[4], DessertsPrices[4]), Reciept(DessertsQuantities[5], DessertsPrices[5])) << " L.E" << endl << endl << endl;

	// Food Reciept

	cout << "Total Reciept = " << TotalReciept(
		SaladsRecieptSummation(
			Reciept(SaladsQuantities[0], SaladsPrices[0]),
			Reciept(SaladsQuantities[1], SaladsPrices[1]),
			Reciept(SaladsQuantities[2], SaladsPrices[2]),
			Reciept(SaladsQuantities[3], SaladsPrices[3])),
		PizzasRecieptSummation(
			Reciept(PizzasQuantities[0], PizzasPrices[0]), Reciept(PizzasQuantities[1], PizzasPrices[1]),
			Reciept(PizzasQuantities[2], PizzasPrices[2]), Reciept(PizzasQuantities[3], PizzasPrices[3]),
			Reciept(PizzasQuantities[4], PizzasPrices[4]), Reciept(PizzasQuantities[5], PizzasPrices[5]),
			Reciept(PizzasQuantities[6], PizzasPrices[6]), Reciept(PizzasQuantities[7], PizzasPrices[7]),
			Reciept(PizzasQuantities[8], PizzasPrices[8]), Reciept(PizzasQuantities[9], PizzasPrices[9]),
			Reciept(PizzasQuantities[10], PizzasPrices[10]), Reciept(PizzasQuantities[11], PizzasPrices[11]),
			Reciept(PizzasQuantities[12], PizzasPrices[12]), Reciept(PizzasQuantities[13], PizzasPrices[13]),
			Reciept(PizzasQuantities[14], PizzasPrices[14]), Reciept(PizzasQuantities[15], PizzasPrices[15]),
			Reciept(PizzasQuantities[16], PizzasPrices[16]), Reciept(PizzasQuantities[17], PizzasPrices[17]),
			Reciept(PizzasQuantities[18], PizzasPrices[18]), Reciept(PizzasQuantities[19], PizzasPrices[19]),
			Reciept(PizzasQuantities[20], PizzasPrices[20])),
		AppetizersRecieptSummation(
			Reciept(AppetizersQuantities[0], AppetizersPrices[0]), Reciept(AppetizersQuantities[1], AppetizersPrices[1]),
			Reciept(AppetizersQuantities[2], AppetizersPrices[2]), Reciept(AppetizersQuantities[3], AppetizersPrices[3])),
		SaucesRecieptSummation(
			Reciept(SaucesQuantities[0], SaucesPrices[0]), Reciept(SaucesQuantities[1], SaucesPrices[0]),
			Reciept(SaucesQuantities[2], SaucesPrices[0]), Reciept(SaucesQuantities[3], SaucesPrices[0]),
			Reciept(SaucesQuantities[4], SaucesPrices[0]), Reciept(SaucesQuantities[5], SaucesPrices[0])),
		BeveragesRecieptSummation(
			Reciept(BeveragesQuantities[0], BeveragesPrices[0]), Reciept(BeveragesQuantities[1], BeveragesPrices[1]),
			Reciept(BeveragesQuantities[2], BeveragesPrices[2]), Reciept(BeveragesQuantities[3], BeveragesPrices[3]),
			Reciept(BeveragesQuantities[4], BeveragesPrices[4]), Reciept(BeveragesQuantities[5], BeveragesPrices[5])),
		DessertsRecieptSummation(
			Reciept(DessertsQuantities[0], DessertsPrices[0]), Reciept(DessertsQuantities[1], DessertsPrices[1]),
			Reciept(DessertsQuantities[2], DessertsPrices[2]), Reciept(DessertsQuantities[3], DessertsPrices[3]),
			Reciept(DessertsQuantities[4], DessertsPrices[4]), Reciept(DessertsQuantities[5], DessertsPrices[5])))<< endl;

	// Payment Method:-

	cout << " How do You Like To Pay ?\n" << endl;
	cout << " * cash * OR * visa *" << endl;
	string Payment;
	cin >> Payment;
	cout << " Your Payment Method Is : " << Payment << endl;

    // Review
	cout << "Please Rate Our Service From 1 To 10" << endl;
		cin >> Rate;
		cout << " **********Thank You for Coming, Enjoy Your food :)**********";

	return 0;
}
