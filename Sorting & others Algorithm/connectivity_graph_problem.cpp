#include<bits/stdc++.h>
using namespace std;
void dfs(vector<vector<int>>&adjlist , int vertexToCheck , vector<bool> & visited){
    visited[vertexToCheck]= true;
    for(int num : adjlist[vertexToCheck]){
        if(!visited[num]){
            dfs(adjlist , num , visited);
        }
    }
}
bool isconnected (vector<vector<int>>&adjlist, int vertics , int vertexToCheck){
    vector<bool> visited(vertics,false);
    dfs(adjlist , vertexToCheck ,visited);
     for (bool v : visited) {
        if (!v) {
            return false;
        }
    }
    return true; 
}
void addedge(vector<vector<int>>&adjlist , int edge , int vertex){
    adjlist[edge].push_back(vertex);
}
int main(){
    int vertics=5;
    vector<vector<int>> adjlist(vertics);
    addedge(adjlist , 0, 1);
    addedge(adjlist, 0, 2);
    addedge(adjlist, 1, 3);
    addedge(adjlist, 1, 4);
    addedge(adjlist, 2, 4);
    vector<bool> visited(vertics,false);
     int vertexToCheck = 3;
    bool connected = isconnected(adjlist , vertics , vertexToCheck);
     if (connected) {
        cout << "Vertex " << vertexToCheck << " is connected to other vertices." << endl;
    } else {
        cout << "Vertex " << vertexToCheck << " is not connected to other vertices." << endl;
    }
}