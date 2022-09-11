#include <iostream>
using namespace std;

int *createArray(int n) {
	int *a = new int[n];
	for (int i = 0; i < n; ++i)
	{
		a[i] = i * i;
	}
	return a;
}

int main() {

	int *a = new int;

	*a = 10;
	cout << *a << endl;

	float *f = new float;
	*f = 11.11;
	cout << *f << endl;

	//////////////////////// CREATE ARRAY ////////////////////////
	/*
	int n;
	cin >> n;
	int *arr = new int[n];

	for (int i = 0; i < n; ++i)
	{
		arr[i] = i + 1;
	}

	for (int i = 0; i < n; ++i)
	{
		cout << arr[i] << " ";
	}
	cout << endl;
	*/

	int *arr = createArray(10);
	for (int i = 0; i < 10; ++i)
	{
		cout << arr[i] << " ";
	}
	cout << endl;

	int *x = new int;
	*x = 100;

	cout << *x + 20 << endl;

	delete x;
	x = NULL;

	if (*x > 0) {
		cout << "Take right\n";
	}
	else {
		cout << "Take left\n";
	}

	cout << *x << endl;

	return 0;
}
















