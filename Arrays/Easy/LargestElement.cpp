#include <iostream>
#include <vector>
using namespace std;

int findLargest(const vector<int> &arr) {
    int largest = INT_MIN;

    for (int num : arr)
        if (largest < num)
            largest = num;

    return largest;
}

int main() {
    vector<int> arr = {8, 10, 5, 7, 9};

    cout << "Largest element = " << findLargest(arr) << endl;
    return 0;
}