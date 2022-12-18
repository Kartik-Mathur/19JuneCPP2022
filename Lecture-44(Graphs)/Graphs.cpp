#include <iostream>
#include <list>
using namespace std;

class Graph {
public:
	list<int> *adj;
	int n;

	Graph(int s) {
		adj = new list<int>[s];
		n = s;
	}

	void addEdge(int u, int v, bool bidir = true) {
		adj[u].push_back(v);
		if (bidir) {
			adj[v].push_back(u);
		}
	}

	void print() {
		for (int i = 0; i < n; ++i)
		{
			cout << i << "-->";
			for (auto neighbour : adj[i]) {
				cout << neighbour << " ";
			}
			cout << endl;
		}
	}
};

int main() {

	Graph g(4);
	g.addEdge(0, 1);
	g.addEdge(0, 2);
	g.addEdge(1, 2);
	g.addEdge(3, 2);
	g.addEdge(0, 3);

	g.print();

	return 0;
}

















