// set.cpp
#include <iostream>
#include <set>
using namespace std;
// Properties of set
// 1. Duplicate entries aren't allowed
// 2. Data will get automatically sorted in set

int main() {

	set<int> s;
	s.insert(5);
	s.insert(3);
	s.insert(2);
	s.insert(4);
	s.insert(1);

	// printing the set
	cout << "Print output: ";
	for (auto e : s) {
		cout << e << " ";
	}
	cout << endl;

	// Find or search
	auto address = s.find(40);
	if (address != s.end()) {
		cout << "Found: " << *address << endl;
	}
	else {
		cout << "Not Found\n";
	}

	// Deletion in set
	while (!s.empty()) {
		cout << *s.begin() << " ";
		s.erase(s.begin());
	}

	return 0;
}
















