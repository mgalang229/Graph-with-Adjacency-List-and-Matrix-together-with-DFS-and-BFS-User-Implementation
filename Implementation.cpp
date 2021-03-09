#include <bits/stdc++.h>
#include "Data.h"

using namespace std;

Graph::Graph(int x) {
	V = x;
	adj = new list <int> [V];
	adj2 = new int* [V];
	for (int i = 0; i < V; i++) {
		adj2[i] = new int[V];
	}
	for (int i = 0; i < V; i++) {
		for (int j = 0; j < V; j++) {
			adj2[i][j] = 0;
		}
	}
}

void Graph::addEdge(int u, int v) {
	adj[u].push_back(v);
}

void Graph::addEdge2(int u, int v) {
	adj2[u][v] = 1;
}

void Graph::printGraph() {
	cout << "Adjacency List..." << endl;
	for (int v = 0; v < V; v++) {
		cout << "V[" << v << "]";
		for (auto x : adj[v]) {
			cout << " -> " << x;
		}
		cout << endl;
	}
}

void Graph::printGraph2() {
	cout << "Adjacency Matrix..." << endl << endl;
	cout << "\t";
	for (int i = 0; i < V; i++) {
		cout << "V[" << i << "]" << "\t";
	}
	cout << endl;
	for (int i = 0; i < V; i++) {
		cout << "V[" << i << "]" << "\t";
		for (int j = 0; j < V; j++) {
			cout << adj2[i][j] << "\t";
		}
		cout << endl;
	}
	cout << endl;
}

void Graph::DFSUtil(int v, bool visited[]) {
	visited[v] = true;
	cout << v << " ";
	list<int>::iterator i;
	for (i = adj[v].begin(); i != adj[v].end(); i++) {
		if (!visited[*i]) {
			DFSUtil(*i, visited);
		}
	}
}

void Graph::DFS(int v) {
	bool *visited = new bool[V];
	for (int i = 0; i < V; i++) {
		visited[i] = false;
	}
	DFSUtil(v, visited);
	for (int i = 0; i < V; i++) {
		if (!visited[i]) {
			DFSUtil(i, visited);
		}
	}
	for (int i = 0; i < V; i++) {
		if (!visited[i]) {
			cout << i << " ";
		}
	}
}

void Graph::BFS(int s) {
	bool *visited = new bool[V];
	for (int i = 0; i < V; i++) {
		visited[i] = false;
	}
	BFSUtil(s, visited);
	for (int i = 0; i < V; i++) {
		if (!visited[i]) {
			BFSUtil(i, visited);
		}
	}
	for (int i = 0; i < V; i++) {
		if (!visited[i]) {
			cout << i << " ";
		}
	}
}

void Graph::BFSUtil(int s, bool visited[]) {
	list<int> queue;
	visited[s] = true;
	queue.push_back(s);
	list<int>::iterator i;
	while (!queue.empty()) {
		s = queue.front();
		cout << s << " ";
		queue.pop_front();
		for (i = adj[s].begin(); i != adj[s].end(); i++) {
			if (!visited[*i]) {
				visited[*i] = true;
				queue.push_back(*i);
			}
		}
	}
}
