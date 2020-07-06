// Problem Link https://codeforces.com/problemset/problem/1374/A
#include <iostream>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    long long t;
    cin >> t;

    long long x, y, n;
    long long k = 0;
    for (long long ti = 0; ti < t; ti++) {
        cin >> x >> y >> n;

        long long r = n % x;
        if (r == y) {
            k = n;
        } else {
            k = n - r + y;
            if (k > n) {
                k -= x;
            }
        }
        cout << k << "\n";
    }
}