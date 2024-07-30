#include <bits/stdc++.h>
using namespace std;
void dfs(vector<vector<int>>& adjList, int startVertex, vector<bool>& visited) {
    visited[startVertex] = true;
    cout << startVertex <<" ";
    for (int neighbor : adjList[startVertex]) {
        if (!visited[neighbor]) {
            dfs(adjList, neighbor, visited);
        }
    }
}
void addEdge(vector<vector<int>>& adjList, int u, int v) {
    adjList[u].push_back(v);
}
int main() {
    int numVertices = 5;
    vector<vector<int>> adjList(numVertices);
    addEdge(adjList, 0, 1);
    addEdge(adjList, 0, 2);
    addEdge(adjList, 1, 3);
    addEdge(adjList, 1, 4);
    addEdge(adjList, 2, 4);
    vector<bool> visited(numVertices, false);
    cout << "Depth First Traversal starting from vertex 0: ";
    dfs(adjList, 0, visited);
    return 0;
}
