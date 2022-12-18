// GenericGraph.cpp
#include <iostream>
#include <unordered_map>
#include <list>
#include <queue>
using namespace std;

template<typename T>
class Graph {
public:
	unordered_map<T, list<T> > adj;
	void addEdge(T u, T v, bool bidir = true) {
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

	void bfs(T src, T des) {
		unordered_map <T, bool> visited;
		unordered_map<T, T> parent;
		unordered_map<T, T> distance;
		queue<T> q;
		q.push(src);
		distance[src] = 0;
		visited[src] = true;
		parent[src] = src;

		while (!q.empty()) {
			T father = q.front();
			q.pop();
			// cout << father << " ";
			for (auto ch : adj[father]) {
				if (!visited[ch]) {
					visited[ch] = true;
					parent[ch] = father;
					distance[ch] = distance[father] + 1;
					q.push(ch);
				}
			}
		}

		cout << endl << "Distance " << distance[des] << endl;
		// PRINTING THE PATH
		while (des != parent[des]) {
			cout << des << "<--";
			des = parent[des];
		}
		cout << des << endl;
	}

	void dfsHelper(T src, unordered_map<T, bool> &visited) {
		cout << src << " ";
		visited[src] = true;
		for (auto ch : adj[src]) {
			if (!visited[ch]) {
				dfsHelper(ch, visited);
			}
		}
	}

	void dfs(T src) {
		unordered_map<T, bool> visited;
		dfsHelper(src, visited);
		int component = 1;

		for (auto n : adj) {
			if (!visited[n.first]) {
				dfsHelper(n.first, visited);
				component++;
			}
		}
		cout << endl << "Total components : " << component << endl;
	}

};

int main() {

	Graph<int> g;

	g.addEdge(0, 1);
	g.addEdge(2, 1);
	g.addEdge(2, 4);
	g.addEdge(0, 4);
	g.addEdge(3, 4);
	g.addEdge(3, 2);
	g.addEdge(3, 5);
	g.addEdge(7, 8);
	g.addEdge(9, 8);
	g.addEdge(90, 80);
	g.dfs(0);

	// int board[50] = {0};
	// board[2] = 13;
	// board[5] = 2;
	// board[9] = 18;
	// board[18] = 11;
	// board[17] = -13;
	// board[20] = -14;
	// board[24] = -8;
	// board[25] = -10;
	// board[32] = -2;
	// board[34] = -22;
	// for (int u = 0; u <= 36; ++u)
	// {
	// 	for (int dice = 1; dice <= 6; ++dice)
	// 	{
	// 		int v = u + dice + board[u + dice];
	// 		g.addEdge(u, v, false);
	// 	}
	// }


	// g.addEdge(0, 1);
	// g.addEdge(2, 1);
	// g.addEdge(2, 4);
	// g.addEdge(0, 4);
	// g.addEdge(3, 4);
	// g.addEdge(3, 2);
	// g.addEdge(3, 5);
	// g.addEdge("Vaibhav", "Lakshya");
	// g.addEdge("Yash", "Lakshya");
	// g.addEdge("Yash", "Prabhnoor");
	// g.addEdge("Varun", "Prabhnoor");
	// g.addEdge("Barbie", "Rajas");
	// g.addEdge("Barbie", "Prabhnoor");
	// g.print();
	// g.bfs(0, 36);


	return 0;
}
















