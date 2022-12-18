#include <iostream>
#include <list>
using namespace std;

int main() {

	list<int> l;
	l.push_back(0);
	l.push_back(1);
	l.push_back(2);
	l.push_back(3);
	l.push_back(4);
	l.push_back(5);
	l.push_back(6);
	l.push_back(7);

	// l.remove(3);
	for (auto it = l.begin(); it != l.end() ; it++) {
		if (*it == 3) {
			l.insert(it, 100);
			break;
		}
	}


	for (auto data : l) {
		cout << data << "-->";
	}
	cout << endl;

	return 0;
}
















