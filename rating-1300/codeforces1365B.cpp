// Problem Link https://codeforces.com/problemset/problem/1365/B
#include <iostream>
#include <vector>
#include <tuple>
#include <algorithm>

using namespace std;

int main() {
    int t;
    cin >> t;

    int n;
    int *a;
    int *b;
    bool has0 = false;
    bool has1 = false;
    bool isSorted = true;
    for (int ti = 0; ti < t; ti++) {
        has1 = has0 = false;
        isSorted = true;
        cin >> n;
        a = new int[n];
        b = new int[n];

        for (int i = 0; i < n; i++) {
            cin >> a[i];
            if (i > 0 && a[i - 1] > a[i]) {
                isSorted = false;
            }
        }
        for (int i = 0; i < n; i++) {
            cin >> b[i];
            if (b[i] == 0) {
                has0 = true;
            } else {
                has1 = true;
            }
        }

        if (((has0 && !has1) || (!has0 && has1)) && !isSorted) {
            cout << "NO" << "\n";
        } else {
            cout << "YES" << "\n";
        }

    }
}