// OOPS.cpp
#include <iostream>
#include <cstring>
using namespace std;

//////////////////////////////////// BLUEPRINT ///////////////////////////////////
class Car {
public:
	// Data Members
	char name[100];
	int model;
	int price;
	int seats;

	///////////////////////// 1. DEFAULT CONSTRUCTOR ///////////////////////////////
	Car() {
		cout << "Inside Default constructor\n";
	}
	///////////////////////// 1.!DEFAULT CONSTRUCTOR ///////////////////////////////

	// Functions
	void print() {
		cout << "Name  : " << name << endl;
		cout << "Price : " << price << endl;
		cout << "Model : " << model << endl;
		cout << "Seats : " << seats << endl << endl;
	}
};
/////////////////////////////////// !BLUEPRINT ///////////////////////////////////

int main() {

	Car A; // A is an object of class Car
	// A.name = "BMW";
	// A.name[0] = 'B';
	// A.name[1] = 'M';
	// A.name[2] = 'W';
	// A.name[3] = '\0';
	strcpy(A.name, "BMW");

	A.price = 1000;
	A.seats = 4;
	A.model = 2018;
	// cout << A.name << endl;
	// cout << A.price << endl;
	// cout << A.model << endl;
	// cout << A.seats << endl;

	Car B;
	strcpy(B.name, "Audi");
	B.price = 500;
	B.seats = 2;
	B.model = 2020;


	A.print();
	B.print();





	return 0;
}
















