#include <iostream>
#include <vector>
using namespace std;

pair<int, int> findSecondSmallestAndLargest(const vector<int> &arr) {
    int largest = INT_MIN, secondLargest = INT_MIN;
    int smallest = INT_MAX, secondSmallest = INT_MAX;

    for (int num : arr) {
        if (num > largest) {
            secondLargest = largest;
            largest = num;
        } else if (num > secondLargest && num != largest) {
            secondLargest = num;
        }

        if (num < smallest) {
            secondSmallest = smallest;
            smallest = num;
        } else if (num < secondSmallest && num != smallest) {
            secondSmallest = num;
        }
    }

    return pair(secondLargest, secondSmallest);
}

int main() {
    vector<int> arr = {1, 2, 4, 7, 7, 5};

    pair<int, int> ans = findSecondSmallestAndLargest(arr);
    cout << "Second largest element = " << ans.first << endl;
    cout << "Second smallest element = " << ans.second << endl;

    return 0;
}