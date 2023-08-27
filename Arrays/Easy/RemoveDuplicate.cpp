#include <iostream>
#include <vector>
using namespace std;

int removeDuplicates(vector<int> &arr) {
    int i = 0;

    for (int j = 1; j < arr.size(); j++) {
        if (arr[i] != arr[j]) {
            i++;
            arr[i] = arr[j];
        }
    }

    return i + 1;
}

void printArray(const vector<int> &arr, int k) {
    for (int i = 0; i < k; i++)
        cout << arr[i] << " ";

    cout << endl;
}

int main() {
    vector<int> arr = {1, 2, 2, 2, 3, 3, 3, 3};

    int k = removeDuplicates(arr);

    cout << "Array after removing duplicates: ";
    printArray(arr, k);

    return 0;
}