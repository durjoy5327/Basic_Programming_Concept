#include <bits/stdc++.h>
using namespace std;
void addEdge(vector<vector<pair<int, int>>>& graph, int from, int to, int weight) {
    graph[from].push_back({to, weight});
}
vector<int> dijkstra(const vector<vector<pair<int, int>>>& graph, int source) {
    int n = graph.size();
    vector<int> distance(n, INT_MAX);
    distance[source] = 0;
    priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> pq;
    pq.push({0, source});
    while (!pq.empty()) {
        int u = pq.top().second;
        pq.pop();
        for (const auto& edge : graph[u]) {
            int v = edge.first;
            int weight = edge.second;
            if (distance[u] != INT_MAX && distance[u] + weight < distance[v]) {
                distance[v] = distance[u] + weight;
                pq.push({distance[v], v});
            }
        }
    }
    return distance;
}
int main() {
    int n = 6;
    vector<vector<pair<int, int>>> graph(n);
    addEdge(graph, 0, 1, 5);
    addEdge(graph, 0, 2, 3);
    addEdge(graph, 1, 3, 6);
    addEdge(graph, 1, 2, 2);
    addEdge(graph, 2, 4, 4);
    addEdge(graph, 2, 5, 2);
    addEdge(graph, 3, 4, 6);
    addEdge(graph, 4, 5, 1);
    int source = 0;
    vector<int> shortestPaths = dijkstra(graph, source);
    cout << "Shortest paths from vertex " << source << ":\n";
    for (int i = 0; i < n; ++i) {
        cout << "Vertex " << i << ": " << shortestPaths[i] << "\n";
    }
    return 0;
}
