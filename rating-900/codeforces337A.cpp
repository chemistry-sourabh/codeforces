
// Problem Link https://codeforces.com/problemset/problem/337/A

#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    int n, m;
    cin >> n >> m;

    int f[m];
    for (int i = 0; i < m; i++) {
        cin >> f[i];
    }

    sort(f, f + m);

    int diff = INT32_MAX;
    for (int i = 0; i <= m - n; i++) {
        int newDiff = f[i + n - 1] - f[i];
        if (newDiff < diff) {
            diff = newDiff;
        }
    }

    cout << diff << "\n";
}