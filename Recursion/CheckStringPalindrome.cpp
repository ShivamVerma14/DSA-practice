#include <iostream>
using namespace std;

bool isPalindrome(int i, const string &str) {
    if (i >= str.length() / 2)
        return true;

    if (str[i] != str[str.length() - i - 1])
        return false;

    return isPalindrome(i + 1, str);
}

int main() {
    string str = "madam";

    if (isPalindrome(0, str))
        cout << "Yes" << endl;
    else
        cout << "No" << endl;

    return 0;
}