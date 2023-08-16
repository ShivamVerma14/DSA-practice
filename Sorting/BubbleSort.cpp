#include <iostream>
using namespace std;

void bubbleSort(int arr[], int size) {
    for (int i = 0; i < size - 1; i++) {
        bool swapped = false;

        for (int j = 0; j < size - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                swap(arr[j], arr[j + 1]);
                swapped = true;
            }
        }

        if (!swapped)
            break;
    }
}

void printArray(int arr[], int size) {
    for (int i = 0; i < size; i++)
        cout << arr[i] << " ";

    cout << endl;
}

int main() {
    int arr[] = {13, 46, 24, 52, 20, 9};
    int size = sizeof(arr) / sizeof(int);

    bubbleSort(arr, size);
    printArray(arr, size);

    return 0;
}