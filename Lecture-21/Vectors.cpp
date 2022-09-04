// Vectors.cpp
#include <iostream>
#include <vector>
using namespace std;

int main() {
	// vector<datatype> name;
	vector<int> v;

	for (int i = 1; i <= 5; ++i)
	{
		cout << "Inserting: " << i << " : ";
		v.push_back(i);
		cout << " Size: " << v.size() << ", Capacity: " << v.capacity() << endl;
	}

	for (int i = 0; i < v.size(); ++i)
	{
		cout << v[i] << " ";
	}
	cout << endl;

	// VECTOR INITIALIZATION
	// 1st way
	// vector<int> v1({1, 2, 3, 4, 5, 6, 7, 8, 9, 10});

	// 2nd way
	// vector<int> v1 = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

	// 3rd way
	int a[] = {1, 2, 3, 4, 5, 6};
	int n = sizeof(a) / sizeof(int);
	vector<int> v1(a, a + n);

	for (int i = 0; i < v1.size(); ++i)
	{
		cout << v1[i] << " ";
	}
	cout << endl;


	return 0;
}
















