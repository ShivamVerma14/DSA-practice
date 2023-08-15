#include <iostream>
using namespace std;

void printAllDivisors(int num) {
    cout << "Divisors of " << num << " are ";

    for (int i = 1; i * i <= num; i++)
        if (num % i == 0) {
            cout << i << " ";
            
            if (i != num / i)
                cout << num / i << " ";
        }

    cout << endl;
}

int main() {
    int num = 36;

    printAllDivisors(num);
    return 0;
}