#include <iostream>
#include <vector>
using namespace std;

void moveZeroes(vector<int> &arr) {
    int j = 0;

    for (int i = 0; i < arr.size(); i++) {
        if (arr[i] != 0) {
            arr[j] = arr[i];
            j++;
        }
    }

    for (; j < arr.size(); j++)
        arr[j] = 0;
}

void printArray(const vector<int> &arr) {
    for (int num : arr)
        cout << num << " ";

    cout << endl;
}

int main() {
    vector<int> arr = {1, 0, 2, 3, 0, 4, 0, 1};

    moveZeroes(arr);
    printArray(arr);

    return 0;
}