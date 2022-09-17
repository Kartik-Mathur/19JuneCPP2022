// OOPS.cpp
#include <iostream>
#include <cstring>
using namespace std;
// E Bala guru swamy - OOPS

//////////////////////////////////// BLUEPRINT ///////////////////////////////////
class Car {
private:
	int price;
public:
	// Data Members
	char *name;
	int model;
	int seats;
	static int cnt;
	const int tyres;
	/// DEFAULT METHODS
	///////////////////////// 1. DEFAULT CONSTRUCTOR ///////////////////////////////
	// Car() : initialize() {}
	Car(): tyres(4) {
		cout << "Inside Default constructor\n";
		name = NULL;
		cnt++;
	}
	///////////////////////// 1.@DEFAULT CONSTRUCTOR ///////////////////////////////

	//////////////////// 2. Parameterized CONSTRUCTOR //////////////////////////////
	Car(char *n, int p, int s, int m): tyres(4), model(m), price(p), seats(s) {
		cnt++;
		cout << "Inside Parameterized constructor\n";
		name = new char[strlen(n) + 1];
		strcpy(name, n);
		// price = p;
		// model = m;
		// seats = s;
	}
	//////////////////// 2.@Parameterized CONSTRUCTOR //////////////////////////////


	//////////////////// 3. COPY CONSTRUCTOR //////////////////////////////
	Car(Car &X): tyres(4) {
		cnt++;
		cout << "Inside Copy constructor\n";
		// name = X.name;
		name = new char[strlen(X.name) + 1];
		strcpy(name, X.name);
		price = X.price;
		model = X.model;
		seats = X.seats;
	}
	//////////////////// 3. @COPY CONSTRUCTOR //////////////////////////////


	//////////////////// 4. COPY ASSIGNMENT Operator ///////////////////////
	// C = B;
	// void operator=(Car &X) {
	// 	cout << "Inside Copy Assignment Operator\n";
	// 	strcpy(name, X.name);
	// 	price = X.price;
	// 	model = X.model;
	// 	seats = X.seats;
	// }
	//////////////////// 4. @COPY ASSIGNMENT Operator //////////////////////

	//////////////////// 5. DESTRUCTOR /////////////////////////////////////
	// Tilde: ~
	~Car() {
		cout << "Destroying: " << name << '\n';
		cnt--;
	}
	//////////////////// 5. @DESTRUCTOR ////////////////////////////////////

	// Functions
	void print() {
		cout << "Name  : " << name << endl;
		cout << "Price : " << price << endl;
		cout << "Model : " << model << endl;
		cout << "Seats : " << seats << endl;
		cout << "Tyres : " << tyres << endl << endl;
	}


	// SetName
	void setName(char *n) {
		if (name != NULL) {
			delete []name;
		}

		name = new char[strlen(n) + 1];
		strcpy(name, n);
	}

	/////////////////////////////// OPERATOR OVERLOADING ///////////////////////////////////
	void operator+=(Car X) {
		char *oldname = name;
		cout << "Count of Cars: " << cnt << endl;

		name = new char[strlen(name) + strlen(X.name) + 1];
		strcpy(name, oldname);
		strcat(name, X.name);

		price += X.price;
		model += X.model;
		seats += X.seats;

		delete[] oldname;
	}
	////////////////////////////// @OPERATOR OVERLOADING ///////////////////////////////////


	// Setter for price
	void updatePrice(int p) {
		if (p > 800 and p < 1000) {
			price = p;
		}
		else {
			price = 900;
		}
	}
	// getter for price
	int getPrice() {
		return price;
	}
};
/////////////////////////////////// !BLUEPRINT ///////////////////////////////////

int Car::cnt = 0;

int main() {

	Car A; // A is an object of class Car
	// A.name = "BMW";
	// A.name[0] = 'B';
	// A.name[1] = 'M';
	// A.name[2] = 'W';
	// A.name[3] = '\0';
	// A.name = new char[4];
	// strcpy(A.name, "BMW");

	A.setName("BMW");

	// A.price = -1000;
	A.updatePrice(-1000);
	cout << A.getPrice() << endl;
	A.seats = 4;
	A.model = 2018;

	// Car B("Audi", 500, 2, 2020);
	Car B = A;

	Car C = B;
	// Car C(B);

	// Copy Assignment Operator(=)
	// C = B;

	Car D = C;
	D.name[0] = 'T';

	D += A;

	A.print();
	B.print();
	C.print();
	D.print();

	cout << "Count of Cars: " << Car::cnt << endl;





	return 0;
}
















