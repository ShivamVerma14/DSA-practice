/*
   A
  ABA
 ABCBA
ABCDCBA
*/

#include <iostream>
using namespace std;

int main() {
    int n = 4;

    for (int i = 1; i <= n; i++) {
        char ch = 'A';

        for (int j = 1; j <= n - i; j++)
            cout << " ";

        for (int j = 1; j <= i; j++)
            cout << ch++;

        ch -= 2;
        for (int j = 1; j < i; j++)
            cout << ch--;

        cout << endl;
    }

    return 0;
}