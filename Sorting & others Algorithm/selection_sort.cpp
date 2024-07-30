#include <bits/stdc++.h>
using namespace std;
void selectionSort(vector<int>& vec) {
    int n = vec.size();
    for (int i = 0; i < n - 1; i++) {
        int minIndex = i;
        for (int j = i + 1; j < n; j++) {
            if (vec[j] < vec[minIndex]) {
                minIndex = j;
            }
        }
        if (minIndex != i) {
            int temp = vec[i];
            vec[i] = vec[minIndex];
            vec[minIndex] = temp;
        }
    }
}

int main() {
    vector<int> vec = {64, 25, 12, 22, 11};
    cout << "Original vector: ";
    for (int i = 0; i < vec.size(); i++) {
        cout << vec[i] << " ";
    }
    cout << endl;
    selectionSort(vec);
    cout << "Sorted vector: ";
    for (int i = 0; i < vec.size(); i++) {
        cout << vec[i] << " ";
    }
    cout << endl;
    return 0;
}
