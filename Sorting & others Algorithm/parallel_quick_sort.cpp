#include <iostream>
#include <vector>
#include <thread>
#include <mutex>

using namespace std;

// Partition function to partition the array and return the pivot index
int Partition(vector<int>& arr, int low, int high) {
    int pivot = arr[high];
    int i = low - 1;

    for (int j = low; j < high; ++j) {
        if (arr[j] < pivot) {
            ++i;
            swap(arr[i], arr[j]);
        }
    }
    swap(arr[i + 1], arr[high]);
    return i + 1;
}

// ParallelQuicksort function
void ParallelQuicksort(vector<int>& arr, int low, int high) {
    if (low < high) {
        int pivotIndex = Partition(arr, low, high);

        // Create two threads to sort the two partitions concurrently
        thread t1([&arr, low, pivotIndex]() { ParallelQuicksort(arr, low, pivotIndex - 1); });
        thread t2([&arr, pivotIndex, high]() { ParallelQuicksort(arr, pivotIndex + 1, high); });

        // Join the threads
        t1.join();
        t2.join();
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

    // Perform parallel quicksort
    ParallelQuicksort(numbers, 0, size - 1);

    cout << "Array after sorting: ";
    for (int num : numbers) {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}
