#include <iostream>
using namespace std;

bool isPrime(int num) {
    if (num == 1)
        return false;

    for (int i = 2; i * i < num; i++)
        if (num % i == 0)
            return false;

    return true;
}

int main() {
    int num = 173;

    if (isPrime(num))
        cout << "Yes" << endl;
    else
        cout << "No" << endl;

    return 0;
}