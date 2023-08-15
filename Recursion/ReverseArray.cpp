#include <iostream>
using namespace std;

void reverseArray(int arr[], int beg, int end) {
    if (beg < end) {
        swap(arr[beg], arr[end]);
        reverseArray(arr, beg + 1, end - 1);
    }
}

void printArray(int arr[], int size) {
    for (int i = 0; i < size; i++)
        cout << arr[i] <<  " ";

    cout << endl;        
}

int main() {
    int n = 5;
    int arr[] = {1, 2, 3, 4, 5};

    reverseArray(arr, 0, n - 1);
    
    cout << "After reversing, array is ";
    printArray(arr, n);

    return 0;
}