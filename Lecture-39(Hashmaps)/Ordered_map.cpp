// Hashmap.cpp
#include <iostream>
#include <map>
using namespace std;

int main() {

	// Output is sorted according to key
	map<string, int> h; // Insertion, deletion: O(logn), RedBlack Trees
	// We need to insert a pair of key and value
	// 1st way of insertion
	pair<string, int> p;
	p.first = "Mango";
	p.second =  100;
	h.insert(p);

	// 2nd way of insertion
	pair<string, int> p1("Kiwi", 50);
	h.insert(p1);

	// 3rd way of insertion
	h.insert({"Banana", 60});
	h.insert({"Litchi", 60});
	h.insert({"Peach", 60});
	h.insert({"Guava", 60});
	h.insert({"Ramfal", 60});
	h.insert({"Sitafal", 60});

	// 4th way of insertion
	h.insert(make_pair("Papaya", 90));

	// for each pair p that belongs to hashmap h
	// for (pair<string, int> p : h) {
	for (auto p : h) {
		cout << p.first << ", " << p.second << endl;
	}


	return 0;
}
















