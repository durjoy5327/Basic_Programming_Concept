#include <bits/stdc++.h>
using namespace std;
int partition(vector<int>& vec, int low, int high) {
    int pivot = vec[high];
    int i = low - 1;
    for (int j = low; j < high; j++) {

       if (vec[j] <= pivot) {
            i++;
            int temp= vec[i];
            vec[i]= vec[j];
            vec[j]=temp;
        }
    }
    int temp= vec[i+1];
    vec[i+1]= vec[high];
    vec[high]=temp;
    return i + 1;
}
void quickSort(vector<int>& vec, int low, int high) {
    if (low < high) {
        int pivot = partition(vec, low, high);
        quickSort(vec, low, pivot - 1);
        quickSort(vec, pivot + 1, high);
    }
}
int main() {
    vector<int> vec = {10, 7, 8, 9, 1, 5};
    int n = vec.size();
    cout << "Original vector: ";
    for (int i = 0; i < n; i++) {
        cout << vec[i] << " ";
    }
    cout << endl;
    quickSort(vec, 0, n - 1);
    cout << "Sorted vector: ";
    for (int i = 0; i < n; i++) {
        cout << vec[i] << " ";
    }
    cout << endl;
    return 0;
}
