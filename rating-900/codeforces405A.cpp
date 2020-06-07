
// Problem Link https://codeforces.com/problemset/problem/405/A

#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    int n;
    cin >> n;

    int a[n];
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    sort(a, a + n);

    for (int i = 0; i < n; i++) {
        cout << a[i];
        if (i != n - 1) {
            cout << " ";
        }
    }

    cout << "\n";
}