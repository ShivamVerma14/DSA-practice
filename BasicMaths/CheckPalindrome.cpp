#include <iostream>
using namespace std;

bool isPalindrome(int num) {
    int temp = num;
    int reverse = 0;

    while (temp) {
        int lastDigit = temp % 10;

        reverse = reverse * 10 + lastDigit;
        temp /= 10;
    }

    return reverse == num;
}

int main() {
    int num = 121;

    if (isPalindrome(num))
        cout << "Yes" << endl;
    else
        cout << "No" << endl;

    return 0;
}