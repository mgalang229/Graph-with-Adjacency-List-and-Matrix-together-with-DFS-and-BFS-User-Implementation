#ifndef DATA_H
#define DATA_H
#include <bits/stdc++.h>

using namespace std;

class Graph {
	private:
		int V;
		list <int> *adj;
		int **adj2;
		void DFSUtil(int v, bool visited[]);
		void BFSUtil(int s, bool visited[]);
	public:
		Graph(int);
		void addEdge(int u, int v);
		void addEdge2(int u, int v);
		void printGraph();
		void printGraph2();
		void DFS(int v);
		void BFS(int s);
};

#endif
