// GenericGraph.cpp
#include <iostream>
#include <unordered_map>
#include <list>
#include <queue>
#include <set>
using namespace std;

template<typename T>
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

	void dijkstras(T src, T des) {
		set<pair<int, T> > s;
		unordered_map<T, int> distance;
		unordered_map<T, T> parent;
		// Pehle saare nodes ke distance ko infinite mark kia
		for (auto n : adj) {
			distance[n.first] = INT_MAX;
		}
		// distance src ka src se 0 hoga, aur whi khud ka parent
		distance[src] = 0;
		parent[src] = src;
		// set mei src ko 0 distance ke saath insert kia
		s.insert({distance[src], src});

		while (!s.empty()) {
			// set se node nikalo aur usko father assume karke
			// use children par iterate krna h
			auto p = *(s.begin());

			auto father = p.second;
			auto father_distance = p.first;

			s.erase(s.begin());

			for (auto cp : adj[father]) {
				// toh pair mei se child aur edge_distance seperate kia
				auto c = cp.first;
				auto edge_distance = cp.second;
				// agar child ka distance jyada hai
				// father ke distance + edge_dist se
				// toh uske current distance se kam distance mei
				// us tak pahuchne ka raasta  mill gaya
				if (distance[father] + edge_distance < distance[c]) {
					// ab agar koi child already set mei hai present
					// toh usko udda do
					auto add = s.find({distance[c], c});

					if (add != s.end()) {
						s.erase(add);
					}
					// distance and parent update karo child ka
					distance[c] = distance[father] + edge_distance;
					parent[c] = father;
					// aur updated distance ke saath, child ko set  mei
					// daal do
					s.insert({distance[c], c});
				}
			}
		}

		for (auto n : distance) {
			cout << "Distance of " << n.first << " from "
			     << src << " : " << n.second << endl;
		}

		while (des != parent[des]) {
			cout << des << "<--";
			des = parent[des];
		}
		cout << des << endl;
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
	// g.print();
	g.dijkstras("Amritsar", "Mumbai");

	return 0;
}
















