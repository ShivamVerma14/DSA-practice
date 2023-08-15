#include <iostream>
using namespace std;

void printNumbers(int i, int n) {
    if (i > n)
        return;

    cout << i++ << " ";
    printNumbers(i, n);
}

int main() {
    int n = 10;

    printNumbers(1, n);
    return 0;
}