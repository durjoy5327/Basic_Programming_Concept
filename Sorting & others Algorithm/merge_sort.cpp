#include<bits/stdc++.h>
using namespace std;
void Merge(vector<int>& vec, int left, int mid, int right) {
    int i, j, k;
    int left_size = mid - left + 1;
    int right_size = right - mid;
    vector<int> L(left_size), R(right_size);
    for (i = 0; i < left_size; i++)
        L[i] = vec[left + i];
    for (j = 0; j < right_size; j++)
        R[j] = vec[mid + 1 + j];

    i = 0 ,j=0, k=left; 
    while (i < left_size && j < right_size) {
        if (L[i] <= R[j]) {
            vec[k] = L[i];
            i++;
        }
        else {
            vec[k] = R[j];
            j++;
        }
        k++;
    }
    while (i < left_size) {
        vec[k] = L[i];
        i++;
        k++;
    }
    while (j < right_size) {
        vec[k] = R[j];
        j++;
        k++;
    }
}
void MergeSort(vector<int>& vec, int left, int right) {
    if (left < right) {
        int mid = left + (right - left) / 2;
        MergeSort(vec, left, mid);
        MergeSort(vec, mid + 1, right);
        
        Merge(vec, left, mid, right);
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
    MergeSort(vec, 0, n - 1);
    cout << "Sorted vector: ";
    for (int i = 0; i < n; i++) {
        cout << vec[i] << " ";
    }
    cout << endl;
    return 0;
}
