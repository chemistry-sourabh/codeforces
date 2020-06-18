// Problem Link https://codeforces.com/problemset/problem/339/B
#include <iostream>

using namespace std;

int main() {
    long long n, m;
    cin >> n >> m;

    long long a[m];

    for (long long i = 0; i < m; i++) {
        cin >> a[i];
    }

    long long cur = 0;
    long long t = 0;

    for (long long i = 0; i < m; i++) {
        long long d = a[i] - cur - 1;
        if (d < 0) {
            t += n;
        }

        t += d;
        cur = a[i] - 1;
    }

    cout << t << "\n";
}