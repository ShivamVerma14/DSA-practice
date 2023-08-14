/*
*
* *
* * *
* * * *
* * * * *
* * * *
* * *
* *
*
*/

#include <iostream>
using namespace std;

int main() {
    int n = 5;

    int i = 1;
    for (; i <= n; i++) {
        for (int j = 1; j <= i; j++)
            cout << "* ";

        cout << endl;
    }
    
    i -= 2;
    for (; i >= 1; i--) {
        for (int j = 1; j <= i; j++)
            cout << "* ";

        cout << endl;
    }

    return 0;
}