/*
E
D E
C D E
B C D E
A B C D E
*/

#include <iostream>
using namespace std;

int main() {
    int n = 5;

    for (int i = 1; i <= n; i++) {
        char ch = 'A' + n - 1;

        for (int j = 1; j <= i; j++)
            cout << ch-- << " ";

        cout << endl;
    }

    return 0;
}