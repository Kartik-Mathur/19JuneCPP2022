// Queue.cpp
#include <iostream>
#include <queue>
using namespace std;

int main() {

	queue<int> q;
	q.push(1);
	q.push(2);
	q.push(3);
	q.push(4);

	while (!q.empty()) {
		cout << q.front() << " ";
		q.pop();
	}

	return 0;
}
















