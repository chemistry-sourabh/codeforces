// Problem Link https://codeforces.com/problemset/problem/1368/A
#include <iostream>
#include <cmath>
#include <algorithm>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin >> t;

    unsigned long long a, b, n;
    unsigned long long x, y;
    unsigned long long c = 0;
    for (int i = 0; i < t; i++) {
        cin >> a >> b >> n;

        c = 0;
        x = a;
        y = b;
        while (x <= n && y <= n) {
            if (x < y) {
                x += y;
            } else {
                y += x;
            }
            c++;
        }

        cout << c << "\n";
    }
}