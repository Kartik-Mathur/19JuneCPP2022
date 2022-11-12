#include <iostream>
#include <unordered_map>
using namespace std;

int main() {

	unordered_map<string, int> h;
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

	for (int i = 0; i < h.bucket_count(); ++i)
	{
		cout << i << "-->";
		for (auto it = h.begin(i) ; it != h.end(i) ; it++) {
			cout << "(" << it->first << ", " << it->second << ") ";
		}
		cout << endl;
	}



	return 0;
}
















