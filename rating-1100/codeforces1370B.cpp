// Problem Link https://codeforces.com/problemset/problem/1370/B
#include <iostream>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int t;
    cin >> t;

    int n;
    int *a;
    int *odd;
    int *even;
    int o, e;
    for (int ti = 0; ti < t; ti++) {
        cin >> n;

        a = new int[2 * n];
        odd = new int[2 * n];
        even = new int[2 * n];
        o = 0;
        e = 0;

        for (int i = 0; i < 2 * n; i++) {
            cin >> a[i];
        }

        for (int i = 0; i < 2 * n; i++) {
            if (a[i] % 2 == 0) {
                even[e] = i;
                e++;
            } else {
                odd[o] = i;
                o++;
            }
        }

        if (o % 2 == 0 && e == 0) {
            o -= 2;
        } else if( e % 2 == 0 && o == 0) {
            e -= 2;
        } else if( o % 2 == 0 && e % 2 == 0) {
            e -= 2;
        } else {
            o--;
            e--;
        }

        for (int i = 0; i < o - 1; i += 2) {
            cout << odd[i] + 1 << " " << odd[i + 1] + 1 << "\n";
        }

        for (int i = 0; i < e - 1; i += 2) {
            cout << even[i] + 1 << " " << even[i + 1] + 1 << "\n";
        }
    }
}