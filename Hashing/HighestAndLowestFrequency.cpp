#include <iostream>
#include <unordered_map>
using namespace std;

void printFrequency(int arr[], int size) {
    unordered_map<int, int> freq;

    for (int i = 0; i < size; i++)
        freq[arr[i]]++;

    int maxFreq = 0, minFreq = size;
    int maxElement = 0, minElement = 0;

    for (auto [element, count] : freq) {
        if (count > maxFreq) {
            maxFreq = count;
            maxElement = element;
        }

        if (count < minFreq) {
            minFreq = count;
            minElement = element;
        }
    }

    cout << "Highest frequency element is " << maxElement << endl;
    cout << "Lowest frequency element is " << minElement << endl;
}

int main() {
    int size = 6;
    int arr[] = {10, 5, 10, 15, 10, 5};

    printFrequency(arr, size);
    return 0;
}