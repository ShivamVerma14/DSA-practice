#include <bits/stdc++.h>
using namespace std;

void reverse(vector<int> &arr, int beg, int end) {
    while (beg < end) {
        arr[beg] ^= arr[end];
        arr[end] ^= arr[beg];
        arr[beg] ^= arr[end];

        beg++;
        end--;
    }
}

void printArray(const vector<int> &arr) {
    for (int num : arr)
        cout << num << " ";

    cout << endl;
}

void rightRotate(vector<int> arr, int k) {
    int n = arr.size();
    
    reverse(arr, 0, n - k - 1);
    reverse(arr, n - k, n - 1);

    reverse(arr, 0, n - 1);

    printArray(arr);
}

void leftRotate(vector<int> arr, int k) {
    int n = arr.size();

    reverse(arr, 0, k - 1);
    reverse(arr, k, n - 1);

    reverse(arr, 0, n - 1);

    printArray(arr);
}

int main() {
    vector<int> arr = {1, 2, 3, 4, 5, 6, 7};
    int k = 2;

    rightRotate(arr, k);
    leftRotate(arr, k);

    return 0;
}