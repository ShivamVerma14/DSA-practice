#include <iostream>
#include <vector>
using namespace std;

vector<int> findUnion(const vector<int> &a, vector<int> &b) {
    vector<int> u;

    int i = 0, j = 0;

    while (i < a.size() && j < b.size()) {
        if (a[i] <= b[j]) {
            if (u.size() == 0 || a[i] != u.back())
                u.push_back(a[i]);
            i++;
        }
        else if (a[i] > b[j]) {
            if (u.size() == 0 || b[j] != u.back())
                u.push_back(b[j]);
            j++;
        }
    }

    while (i < a.size()) {
        if (a[i] != u.back())
            u.push_back(a[i]);
        i++;
    }

    while (j < b.size()) {
        if (b[j] != u.back())
            u.push_back(b[j]);
        j++;
    }

    return u;
}

void printArray(const vector<int> &arr) {
    for (int num : arr)
        cout << num << " ";

    cout << endl;
}

int main() {
    vector<int> a = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    vector<int> b = {2, 2, 4, 5, 5, 10, 12, 15};

    vector<int> u = findUnion(a, b);
    
    cout << "Union = ";
    printArray(u);

    return 0;
}