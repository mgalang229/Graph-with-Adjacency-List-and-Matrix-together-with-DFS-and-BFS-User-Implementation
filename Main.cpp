#include <bits/stdc++.h>
#include "Data.h"
#include "Implementation.cpp"

using namespace std;

int main() {
	int ch;
	Graph g(8);
	cout << "Graph Operations" << endl;
	cout << "[1] Adjacency List" << endl;
	cout << "[2] Adjacency Matrix" << endl;
	cout << "Enter choice: ";
	cin >> ch;
	if (ch == 1) {
		g.addEdge(0, 6);
		g.addEdge(1, 5);
		g.addEdge(2, 0);
		g.addEdge(2, 4);
		g.addEdge(3, 5);
		g.addEdge(4, 1);
		g.addEdge(4, 3);
		g.addEdge(5, 7);
		g.addEdge(6, 1);
		g.addEdge(6, 7);
		g.printGraph();
		cout << endl << "DFS Traversal..." << endl;
		g.DFS(1);
		cout << endl;
		cout << endl << "BFS Traversal..." << endl;
		g.BFS(3);
	} else if (ch == 2) {
		g.addEdge2(0, 1);
		g.addEdge2(0, 4);
		g.addEdge2(1, 2);
		g.addEdge2(1, 0);
		g.addEdge2(1, 3);
		g.addEdge2(1, 4);
		g.addEdge2(2, 1);
		g.addEdge2(2, 3);
		g.addEdge2(3, 1);
		g.addEdge2(3, 2);
		g.addEdge2(3, 4);
		g.addEdge2(4, 0);
		g.addEdge2(4, 1);
		g.addEdge2(4, 3);
		g.printGraph2();
	}
	cout << endl << endl;
	return 0;
}
