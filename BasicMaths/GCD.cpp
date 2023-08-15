#include <cstdio>

int gcd(int a, int b) {
    if (b == 0)
        return a;
    
    return gcd(b, a % b);
}

int main() {
    int a = 12, b = 45;

    printf("GCD of %d and %d is %d.", a, b, gcd(a, b));
    return 0;
}