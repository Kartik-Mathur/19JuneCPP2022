// TopKElements.cpp
#include <iostream>
#include <queue>
#include <functional>
using namespace std;

void printQueue(priority_queue<int, vector<int>, greater<int> > q) {
	while (!q.empty()) {
		cout << q.top() << " ";
		q.pop();
	}
	cout << endl;
}

int main() {

	// k = 3

	// 1 2 3 0 0 -1 4 0 0 0 -1 6 7 8 -1 -4 -5 -6 -1
	// 1st time: 1 2 3
	// 2nd time: 2 3 4
	// 3rd time: 6 7 8
	// 4th time: 6 7 8

	priority_queue<int, vector<int>, greater<int> > q;
	int data;
	int k = 3, cnt = 0;
	while (1) {
		cin >> data;
		if (data == -1) {
			// print top k elements till now from start
			printQueue(q);

		} else {
			if (cnt < k) {
				q.push(data);
				cnt++;
			}
			else {
				if (data > q.top()) {
					q.pop();
					q.push(data);
				}
			}
		}
	}

	return 0;
}
















