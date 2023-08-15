#include <iostream>
using namespace std;

void printName(string name, int n) {
    if (n == 0)
        return;

    cout << name << endl;
    printName(name, --n);
}

int main() {
    int n = 5;
    string name = "Shivam";

    printName(name, n);
    return 0;
}