#include <cstdio>

int fibonacciTerm(int n) {
    if (n <= 1)
        return n;

    return fibonacciTerm(n - 1) + fibonacciTerm(n - 2);
}

int main() {
    int n = 10;

    printf("%dth term of Fibonacci Series is %d.", n, fibonacciTerm(n));
    return 0;
}