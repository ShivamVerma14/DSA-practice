#include <iostream>
#include <vector>
using namespace std;

int findNumberAppearingOnce(const vector<int> &arr) {
    int ans = 0;

    for (int num : arr)
        ans ^= num;

    return ans;
}

int main() {
    vector<int> arr = {4, 1, 2, 1, 2};

    int num = findNumberAppearingOnce(arr);
    cout << num;

    return 0;
}