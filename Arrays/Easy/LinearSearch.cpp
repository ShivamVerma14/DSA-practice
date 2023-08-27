#include <iostream>
#include <vector>
using namespace std;

int linearSearch(const vector<int> &arr, int num) {
    for (int i = 0; i < arr.size(); i++)
        if (arr[i] == num)
            return i;

    return -1;
}

int main() {
    vector<int> arr = {1, 2, 3, 4, 5};
    int num = 3;

    int index = linearSearch(arr, num);

    cout << num << " is found at " << index << " index." << endl;
    return 0;
}