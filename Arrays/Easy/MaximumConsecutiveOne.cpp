#include <iostream>
#include <vector>
using namespace std;

int maxConsecutiveOnes(const vector<int> &arr) {
    int maxCount = 0, count = 0;

    for (int i = 0; i < arr.size(); i++) {
        if (arr[i] == 1)
            count++;
        else 
            count = 0;

        maxCount = count > maxCount ? count : maxCount;
    }

    return maxCount;
}

int main() {
    vector<int> arr = {1, 1, 0, 1, 1, 1};

    int count = maxConsecutiveOnes(arr);
    cout << "Max count = " << count;

    return 0;
}