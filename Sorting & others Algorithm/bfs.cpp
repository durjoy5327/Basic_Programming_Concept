#include <bits/stdc++.h>
using namespace std;
void bfs(vector<vector<int> >& adjList, int startVertex, vector<bool>& visited){
    queue<int> q;
    visited[startVertex] = true;
    q.push(startVertex);

    while (!q.empty()){
        int currentVertex = q.front();
        q.pop();
        cout << currentVertex << " ";
        for (int neighbor : adjList[currentVertex]) {
            if (!visited[neighbor]) {
                visited[neighbor] = true;
                q.push(neighbor);
            }
        }
    }
}
void addEdge(vector<vector<int> >& adjList, int u, int v)
{
    adjList[u].push_back(v);
}
int main()
{
    int numVertices = 5;
    vector<vector<int> > adjList(numVertices);
    addEdge(adjList, 0, 1);
    addEdge(adjList, 0, 2);
    addEdge(adjList, 1, 3);
    addEdge(adjList, 1, 4);
    addEdge(adjList, 2, 4);
    vector<bool> visited(numVertices, false);
    cout << "Breadth First Traversal starting from vertex 0: ";
    bfs(adjList, 0, visited);
    return 0;
}
