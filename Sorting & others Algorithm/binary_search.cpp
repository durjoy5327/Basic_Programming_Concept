#include<bits/stdc++.h>
using namespace std;
int binarySearch(vector<int>& vec, int left, int right, int target) {
    if (left > right) return -1;
    int middle = (right + left) / 2;
    if (vec[middle] == target) return middle;
    else if (vec[middle] < target) return binarySearch(vec, middle + 1, right, target);
    else return binarySearch(vec, left, middle - 1, target);
}

int main() {
    vector<int> vec = {4, 6, 9, 11, 14, 17, 19, 25, 26, 27, 30, 33, 37, 39, 40};
    int left = 0;
    int n = vec.size();
    int right = n - 1;
    int target;
    cin >> target;
    int ans = binarySearch(vec, left, right, target);
    if(ans == -1)
        cout << "Not Found";
    else
        cout << "Index = " << ans;
    return 0;
}