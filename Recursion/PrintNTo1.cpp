#include <iostream>
using namespace std;

void printNumbers(int n) {
    if (n < 1)
        return;

    cout << n-- << " ";
    printNumbers(n);
}

int main() {
    int n = 10;

    printNumbers(n);
    return 0;
}