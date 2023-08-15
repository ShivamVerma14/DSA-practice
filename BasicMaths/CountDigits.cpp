#include <cstdio>

int countDigit(int num) {
    int count = 0;

    while (num) {
        count++;
        num /= 10;
    }

    return count;
}

int main() {
    int num = 12345;

    printf("The number of digits in %d is %d.", num, countDigit(num));
    return 0;
}