#include <iostream>
#include <vector>
using namespace std;

void merge(vector<int> &arr, int beg, int mid, int end) {
    vector<int> temp;
    int left = beg;
    int right = mid + 1;

    while (left <= mid && right <= end) {
        if (arr[left] <= arr[right]) {
            temp.push_back(arr[left]);
            left++;
        } else {
            temp.push_back(arr[right]);
            right++;
        }
    }

    while (left <= mid) {
        temp.push_back(arr[left]);
        left++;
    }

    while (right <= end) {
        temp.push_back(arr[right]);
        right++;
    }

    for (int i = beg; i <= end; i++) {
        arr[i] = temp[i - beg];
    }
}

void mergeSort(vector<int> &arr, int beg, int end) {
    if (beg >= end)
        return;

    int mid = (beg + end) / 2;

    mergeSort(arr, beg, mid);
    mergeSort(arr, mid + 1, end);
    merge(arr, beg, mid, end);
}

void printArray(const vector<int> &arr) {
    for (int num : arr)
        cout << num << " ";

    cout << endl;
}

int main() {
    vector<int> arr = {9, 4, 7, 6, 3, 1, 5};

    cout << "Array before sorting: ";
    printArray(arr);

    mergeSort(arr, 0, arr.size() - 1);

    cout << "Array after sorting: ";
    printArray(arr);

    return 0; 
}