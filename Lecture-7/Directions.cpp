#include <iostream>
using namespace std;

int main() {

	char ch;
	int x = 0, y = 0;
	ch = cin.get(); // Initialization
	while (ch != '\n') { // Condition Check
		// Work

		if (ch == 'N') {
			y++;
		}
		else if (ch == 'S') {
			y--;
		}
		else if (ch == 'W') {
			x--;
		}
		else if (ch == 'E') {
			x++;
		}

		ch = cin.get(); // Updation
	}

	// find the quadrant and print the path
	if (x >= 0 and y >= 0) { // 1st quadrant
		// print x times 'E' and then y times 'N'
		for (int i = 0; i < x; ++i)
		{
			cout << "E";
		}

		for (int i = 0; i < y ; ++i)
		{
			cout << "N";
		}

	}
	else if (x <= 0 and y >= 0) { // 2nd quadrant
		// print y times 'N' and x times 'W'
		for (int i = 0; i < y ; ++i)
		{
			cout << "N";
		}

		x = x * (-1); // because x is negative lets make it +ve
		for (int i = 0; i < x; ++i)
		{
			cout << "W";
		}
	}
	else if (x <= 0 and y <= 0) { // 3rd Quadrant
		// print y times 'S' and x times 'W'
		y *= -1;
		for (int i = 0; i < y ; ++i)
		{
			cout << "S";
		}

		x *= -1;
		for (int i = 0; i < x ; ++i)
		{
			cout << "W";
		}
	}
	else { // 4th Quadrant
		// print x times 'E' and then y times 'S'
		for (int i = 0; i < x ; ++i)
		{
			cout << "E";
		}

		y *= -1;
		for (int i = 0; i < y ; ++i)
		{
			cout << "S";
		}
	}


	cout << endl;

	return 0;
}






