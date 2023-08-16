#include <iostream>
#include <vector>
using namespace std;

void countElements(int arr[], int size) {
    vector<bool> visited(size, false);

    for (int i = 0; i < size; i++) {
        if (visited[i])
            continue;

        int count = 1;
        for (int j = i + 1; j < size; j++) {
            if (arr[i] == arr[j]) {
                visited[j] = true;
                count++;
            }
        }

        cout << arr[i] << " : " << count << endl;
    }
}

int main() {
    int size = 6;
    int arr[] = {10, 5, 10, 15, 10, 5};

    countElements(arr, size);
    return 0;
}