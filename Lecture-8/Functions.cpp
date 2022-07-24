// Functions.cpp
#include <iostream>
using namespace std;

// syntax:
// data_type function_name(arguments) {
// Work
// }

void HelloWorld() {
	cout << "Hello World!" << endl;
}

void printAddition(int a, int b) {
	cout << "printing via function: " << a + b << endl;
}

int add(int x, int y) {
	int ans = x + y;

	return ans; // Return the answer jisne bhi maanga usse
}

void printOddEven(int result) {
	if (result % 2 == 0) {
		cout << "Even\n";
	}
	else {
		cout << "Odd\n";
	}
}


int main() {
	HelloWorld(); // Invoking or Calling
	int a = 10, b = 20;
	// printAddition(a, b);
	int result = add(a, b);
	cout << "Sum: " << result << endl;
	printOddEven(result);






	return 0;
}
















