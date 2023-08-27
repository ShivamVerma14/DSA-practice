#include <iostream>
#include <vector>
using namespace std;

int longestSubarrayWithSum(const vector<int> &arr, long long k) {
    int left = 0, right = 0;
    long long sum = arr[0];
    int maxLen = 0;

    while (right < arr.size()) {
        while (left <= right && sum > k) {
            sum -= arr[left];
            left++;
        }

        if (sum == k)
            maxLen = max(maxLen, right - left + 1);

        right++;
        if (right < arr.size())
            sum += arr[right];
    }

    return maxLen;
}

int main() {
    vector<int> arr = {2, 3, 5, 1, 9};
    long long k = 10;

    int length = longestSubarrayWithSum(arr, k);
    cout << "Length = " << length;

    return 0;
}