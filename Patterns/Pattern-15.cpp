/*
A B C D E
A B C D
A B C
A B
A
*/

#include <iostream>
using namespace std;

int main() {
    int n = 5;

    for (int i = n; i >= 1; i--) {
        char ch = 'A';

        for (int j = i; j >= 1; j--)
            cout << ch++ << " ";

        cout << endl;
    }

    return 0;
}