#include <iostream>
#include <cmath>
using namespace std;

int countDigit(int num) {
    return log10(num) + 1;
}

bool isArmstrong(int num) {
    int temp = num;
    int sum = 0;
    int digits = countDigit(num);

    while (temp) {
        int lastDigit = temp % 10;
        sum += pow(lastDigit, digits);
        temp /= 10;
    }

    return sum == num;
}

int main() {
    int num = 153;

    if (isArmstrong(num))
        cout << "Yes" << endl;
    else
        cout << "No" << endl;

    return 0;
}