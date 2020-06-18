// Problem Link https://codeforces.com/problemset/problem/1365/C
#include <iostream>
#include <unordered_map>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int n;
    cin >> n;

    int a[n];
    int b[n];
    int index[n];

    for (int i = 0; i < n; i++) {
        cin >> a[i];
        index[a[i]] = i;
    }

    for (int i = 0; i < n; i++) {
        cin >> b[i];
    }

    auto shifts = unordered_map<int, int>();
    int max = -1;
    int c;
    for (int i = 0; i < n; i++) {
        int s = index[b[i]] - i;
        if (s < -1) {
            s += n;
        }
        shifts[s]++;

        c = shifts[s];
        if (c > max) {
            max = c;
        }
    }

    cout << max << "\n";
}