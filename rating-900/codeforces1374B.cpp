// Problem Link https://codeforces.com/problemset/problem/1374/B
#include <iostream>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    long long t;
    cin >> t;

    unsigned long long n;
    for (long long ti = 0; ti < t; ti++) {
        cin >> n;

        int d = 0;
        long long s = 0;
        while (n > 1) {
            if (n % 6 == 0) {
                n /= 6;
                d = 0;
                s++;
            } else {
                n = n << 1;
                d++;
                s++;
            }

            if (d == 2) {
                s = -1;
                break;
            }
        }
        cout << s << "\n";
    }
}