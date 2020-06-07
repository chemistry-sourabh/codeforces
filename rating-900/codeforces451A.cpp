
// Problem Link https://codeforces.com/problemset/problem/451/A

#include <iostream>

using namespace std;

int main() {
    int n, m;
    cin >> n >> m;

    int t;
    if (n < m) {
        t = n;
    } else {
        t = m;
    }

    if (t % 2 == 0) {
        cout << "Malvika" << "\n";
    } else {
        cout << "Akshat" << "\n";
    }
}