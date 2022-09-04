#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
	// vector<int> v(number_of_buckets,initial_value); // Capacity: 10000
	// vector<int> v(10000); // Capacity: 10000

	int n = 10;
	// cin >> n;
	vector<int> v(n, 10);
	cout << v.capacity() << endl;

	for (int i = 0; i < n; ++i)
	{
		v[i] = i + 1;
	}

	reverse(v.begin(), v.end());

	for (int i = 0; i < n; ++i)
	{
		cout << v[i] << " ";
	}
	cout << endl;


	return 0;
}
















