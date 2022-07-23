// UserInput.cpp
#include <iostream>
using namespace std;

int main() {

	int a[1000], n;
	cout << "Enter N(Max: 1000) ";
	cin >> n;

	for (int i = 0; i < n; ++i)
	{
		cin >> a[i];
	}

	for (int i = 0; i < n; ++i)
	{
		cout << a[i] << " ";
	}

	cout << endl;



	return 0;
}
















