#include <cstdio>

int reverse(int num) {
    int reversedNum = 0;
    
    while (num) {
        int lastDigit = num % 10;

        reversedNum = reversedNum * 10 + lastDigit;
        num /= 10;
    }

    return reversedNum;
}

int main() {
    int num = 12345;

    printf("After reversing, %d becomes %d.", num, reverse(num));
    return 0;
}