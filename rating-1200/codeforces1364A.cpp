// Problem Link https://codeforces.com/problemset/problem/1364/A
#include <iostream>

using namespace std;

int main() {
    int t;
    cin >> t;

    int n, x;
    int *a;
    int sum = 0;
    int s = 0;
    int e = 0;
    for (int ti = 0; ti < t; ti++) {
        cin >> n >> x;
        a = new int[n];
        sum = 0;
        for (int i = 0; i < n; i++) {
            cin >> a[i];
            sum += a[i];
        }

        if (sum % x != 0) {
            cout << n << "\n";
        } else {
            s = n;
            for (int i = 0; i < n; i++) {
                if (a[i] % x == 0) {
                    s--;
                } else {
                    s--;
                    break;
                }
            }

            e = n;
            for (int i = n - 1; i >= 0; i--) {
                if (a[i] % x == 0) {
                    e--;
                } else {
                    e--;
                    break;
                }
            }

            if( s == 0 && e == 0) {
                cout << "-1" << "\n";
            } else if( s < e) {
                cout << e << "\n";
            } else {
                cout << s << "\n";
            }
        }

    }
}