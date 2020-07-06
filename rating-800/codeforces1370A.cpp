// Problem Link https://codeforces.com/problemset/problem/1370/A
#include <iostream>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin >> t;

    long long n;
    for (int ti = 0; ti < t; ti++) {
        cin >> n;

        if (n % 2 == 0) {
            cout << n / 2 << "\n";
        } else {
            cout << (n - 1) / 2 << "\n";
        }
    }
}