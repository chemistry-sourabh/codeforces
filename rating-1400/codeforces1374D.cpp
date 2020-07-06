// Problem Link https://codeforces.com/problemset/problem/1374/D
#include <iostream>
#include <map>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    long long t;
    cin >> t;

    long long n, k;
    long long *a;
    long long r;
    map<long long, long long> m = map<long long, long long>();
    for (long long ti = 0; ti < t; ti++) {
        cin >> n >> k;

        a = new long long[n];
        m.clear();

        for (long long i = 0; i < n; i++) {
            cin >> a[i];
            r = k - ( a[i] % k );
            if (r != k) {
                m[r]++;
            }
        }

        long long x = 0;
        long long s = 0;
        bool exit = true;
        long long c = 0;
        while (true) {
            exit = true;
            for (pair<long long, long long> it : m) {
                r = it.first;

                if(it.second == 0) {
                    continue;
                }

                if (x == r) {
                    s++;
                    x++;
                } else {
                    s += ( r - x ) + 1;
                    x = r + 1;
                }
                m[r]--;

                if(m[r] > 0) {
                    exit = false;
                }
            }
            if (!exit) {
                s += k - x;
                x = 0;
            } else {
                break;
            }
        }

        cout << s << "\n";

    }
}