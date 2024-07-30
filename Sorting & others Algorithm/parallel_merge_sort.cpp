#include <iostream>
#include <vector>
#include <thread>

using namespace std;

// Merge function to merge two sorted halves
void Merge(vector<int>& arr, int left, int mid, int right) {
    int n1 = mid - left + 1;
    int n2 = right - mid;

    vector<int> leftArray(n1);
    vector<int> rightArray(n2);

    for (int i = 0; i < n1; ++i) {
        leftArray[i] = arr[left + i];
    }
    for (int j = 0; j < n2; ++j) {
        rightArray[j] = arr[mid + 1 + j];
    }

    int i = 0, j = 0, k = left;
    while (i < n1 && j < n2) {
        if (leftArray[i] <= rightArray[j]) {
            arr[k] = leftArray[i];
            ++i;
        } else {
            arr[k] = rightArray[j];
            ++j;
        }
        ++k;
    }

    while (i < n1) {
        arr[k] = leftArray[i];
        ++i;
        ++k;
    }

    while (j < n2) {
        arr[k] = rightArray[j];
        ++j;
        ++k;
    }
}

// ParallelMergeSort function
void ParallelMergeSort(vector<int>& arr, int start, int end) {
    if (start < end) {
        int mid = start + (end - start) / 2;

        // Create two threads to sort the two halves concurrently
        thread t1([&arr, start, mid]() { ParallelMergeSort(arr, start, mid); });
        thread t2([&arr, mid, end]() { ParallelMergeSort(arr, mid + 1, end); });

        // Join the threads
        t1.join();
        t2.join();

        // Merge the sorted halves
        Merge(arr, start, mid, end);
    }
}

int main() {
    vector<int> numbers = {12, 11, 13, 5, 6, 7};
    int size = numbers.size();

    cout << "Array before sorting: ";
    for (int num : numbers) {
        cout << num << " ";
    }
    cout << endl;

    // Perform parallel merge sort
    ParallelMergeSort(numbers, 0, size - 1);

    cout << "Array after sorting: ";
    for (int num : numbers) {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}
