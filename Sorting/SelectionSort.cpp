#include <iostream>
using namespace std;

void selectionSort(int arr[], int size) {
    for (int i = 0; i < size - 1; i++) {
        int minIndex = i;

        for (int j = i + 1; j < size; j++)
            if (arr[minIndex] > arr[j])
                minIndex = j;

        if (minIndex != i)
            swap(arr[i], arr[minIndex]);
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

    selectionSort(arr, size);
    printArray(arr, size);

    return 0;
}