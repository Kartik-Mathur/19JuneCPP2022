#include <iostream>
#include <queue>
#include <unordered_map>
#include <list>
using namespace std;

template < typename T>
class Graph {
public:
	unordered_map<T, list<pair<T, int> > > adj;
	void addEdge(T u, T v, int dist, bool bidir = true) {
		adj[u].push_back({v, dist});
		if (bidir) {
			adj[v].push_back({u, dist});
		}
	}

	void print() {
		for (auto n : adj) {
			cout << n.first << "-->";
			for (auto ch : n.second) {
				cout << "(" << ch.first << ", " << ch.second << ") ";
			}
			cout << endl;
		}
	}
};

int main() {

	Graph<string> g;
	g.addEdge("Amritsar", "Agra", 1);
	g.addEdge("Delhi", "Agra", 1);
	g.addEdge("Delhi", "Jaipur", 2);
	g.addEdge("Amritsar", "Jaipur", 4);
	g.addEdge("Mumbai", "Jaipur", 8);
	g.addEdge("Mumbai", "Bhopal", 3);
	g.addEdge("Agra", "Bhopal", 2);

	g.print();


	return 0;
}
















