// OOPS.cpp
#include <iostream>
#include <cstring>
using namespace std;

//////////////////////////////////// BLUEPRINT ///////////////////////////////////
class Car {
public:
	// Data Members
	char *name;
	int model;
	int price;
	int seats;
	/// DEFAULT METHODS
	///////////////////////// 1. DEFAULT CONSTRUCTOR ///////////////////////////////
	Car() {
		cout << "Inside Default constructor\n";
		name = NULL;
	}
	///////////////////////// 1.@DEFAULT CONSTRUCTOR ///////////////////////////////

	//////////////////// 2. Parameterized CONSTRUCTOR //////////////////////////////
	// Car(char *n, int p, int s, int m) {

	// 	cout << "Inside Parameterized constructor\n";
	// 	name = new char[strlen(n) + 1];
	// 	strcpy(name, n);
	// 	price = p;
	// 	model = m;
	// 	seats = s;
	// }
	//////////////////// 2.@Parameterized CONSTRUCTOR //////////////////////////////


	//////////////////// 3. COPY CONSTRUCTOR //////////////////////////////
	Car(Car &X) {
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
	}
	//////////////////// 5. @DESTRUCTOR ////////////////////////////////////

	// Functions
	void print() {
		cout << "Name  : " << name << endl;
		cout << "Price : " << price << endl;
		cout << "Model : " << model << endl;
		cout << "Seats : " << seats << endl << endl;
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
	void operator+=(Car &X) {
		char *oldname = name;

		name = new char[strlen(name) + strlen(X.name) + 1];
		strcpy(name, oldname);
		strcat(name, X.name);

		price += X.price;
		model += X.model;
		seats += X.seats;

		delete[] oldname;
	}
	////////////////////////////// @OPERATOR OVERLOADING ///////////////////////////////////
};
/////////////////////////////////// !BLUEPRINT ///////////////////////////////////

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

	A.price = 1000;
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






	return 0;
}
















