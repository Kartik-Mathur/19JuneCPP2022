// GenericGraph.cpp
#include <iostream>
#include <unordered_map>
#include <list>
using namespace std;

class Graph {
public:
	unordered_map<string, list<string> > adj;
	void addEdge(string u, string v, bool bidir = true) {
		adj[u].push_back(v);
		if (bidir == true) {
			adj[v].push_back(u);
		}
	}

	void print() {
		for (auto p : adj) {
			cout << p.first << "-->";
			for (auto neighbour : p.second) {
				cout << neighbour << " ";
			}
			cout << endl;
		}
	}

};

int main() {

	Graph g;
	g.addEdge("Vaibhav", "Lakshya");
	g.addEdge("Yash", "Lakshya");
	g.addEdge("Yash", "Prabhnoor");
	g.addEdge("Varun", "Prabhnoor");
	g.addEdge("Barbie", "Rajas");
	g.addEdge("Barbie", "Prabhnoor");

	g.print();


	return 0;
}
















