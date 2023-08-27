#include <iostream>
#include <vector>
using namespace std;

void leftRotate(vector<int> &arr) {
    int temp = arr[0];

    for (int i = 0; i < arr.size() - 1; i++)
        arr[i] = arr[i + 1];

    arr[arr.size() - 1] = temp;
}

void printArray(const vector<int> &arr) {
    for (int num : arr)
        cout << num << " ";

    cout << endl;
}

int main() {
    vector<int> arr = {1, 2, 3, 4, 5};

    leftRotate(arr);

    cout << "Array after rotation: ";
    printArray(arr);

    return 0;
}