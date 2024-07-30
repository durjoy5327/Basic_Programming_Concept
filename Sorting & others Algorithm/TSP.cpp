#include <bits/stdc++.h>
using namespace std;
int distance(int x1, int y1, int x2, int y2) {
  return abs(x1 - x2) + abs(y1 - y2);
}
int nearestNeighborTSP(const vector<vector<int>>& distanceMatrix) {
  int n = distanceMatrix.size();
  vector<bool> visited(n, false);
  int currentCity = 0;
  visited[currentCity] = true;
  int totalDistance = 0;
  for (int i = 1; i < n; i++) { 
    int minDist = numeric_limits<int>::max();
    int nextCity = 0;
    for (int j = 0; j < n; j++) {
      if (!visited[j] && distanceMatrix[currentCity][j] < minDist) {
        minDist = distanceMatrix[currentCity][j];
        nextCity = j;
      }
    }
    totalDistance += minDist;
    currentCity = nextCity;
    visited[currentCity] = true;
  }
  totalDistance += distanceMatrix[currentCity][0];
  return totalDistance;
}
int main() {
  int n = 4;
  vector<vector<int>> distanceMatrix = {
    {0, 10, 15, 20},
    {10, 0, 35, 25},
    {15, 35, 0, 30},
    {20, 25, 30, 0}
  };
  int minTourLength = nearestNeighborTSP(distanceMatrix);
  cout << "Minimum tour length using Nearest Neighbor: " << minTourLength << endl;
  return 0;
}
