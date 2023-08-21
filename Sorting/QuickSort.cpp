#include <iostream>
#include <vector>
using namespace std;

int partition(vector<int> &arr, int beg, int end) {
    int pivot = arr[beg];
    int left = beg;
    int right = end;

    while (left < right) {
        while (arr[left] <= pivot && left < end) {
            left++;
        }

        while (arr[right] > pivot && right > beg) {
            right--;
        }

        if (left < right)
            swap(arr[left], arr[right]);
    }

    swap(arr[beg], arr[right]);
    return right;
}

void quickSort(vector<int> &arr, int beg, int end) {
    if (beg < end) {
        int pIndex = partition(arr, beg, end);
        quickSort(arr, beg, pIndex - 1);
        quickSort(arr, pIndex + 1, end);
    }
}

void printArray(const vector<int> &arr) {
    for (int num : arr)
        cout << num << " ";

    cout << endl;
}

int main() {
    vector<int> arr = {4, 6, 2, 5, 7, 9, 1, 3};
    
    cout << "Array before sorting: ";
    printArray(arr);

    quickSort(arr, 0, arr.size() - 1);

    cout << "Array after sorting: ";
    printArray(arr);

    return 0;
}