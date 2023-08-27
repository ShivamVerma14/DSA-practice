#include <iostream>
#include <vector>
using namespace std;

int findMissingNumber(const vector<int> arr, int n) {
    int sum = 0;
    for (int num : arr)
        sum += num;

    int sumTillN = n * (n + 1) / 2;

    return sumTillN - sum;
}

int main() {
    vector<int> arr = {1, 2, 4, 5};
    int n = 5;

    int num = findMissingNumber(arr, n);
    cout << "Missing number = " << num;

    return 0;
}