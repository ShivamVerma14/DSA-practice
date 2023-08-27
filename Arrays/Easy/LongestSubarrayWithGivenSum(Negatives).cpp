#include <bits/stdc++.h>
using namespace std;

int getLongestSubarray(const vector<int> &arr, int k) {
    map<int, int> prefixSum;
    int maxLength = 0;
    int sum = 0;

    for (int i = 0; i < arr.size(); i++) {
        sum += arr[i];

        if (sum == k) {
            maxLength = max(maxLength, i + 1);
        }

        int rem = sum - k;

        if (prefixSum.find(rem) != prefixSum.end()) {
            int length = i - prefixSum[rem];
            maxLength = max(maxLength, length);
        }

        if (prefixSum.find(sum) == prefixSum.end()) {
            prefixSum[sum] = i;
        }
    }

    return maxLength;
}

int main() {
    vector<int> arr = {-1, 1, 1};
    int k = 1;

    int length = getLongestSubarray(arr, k);
    cout << "Length = " << length;

    return 0;
}