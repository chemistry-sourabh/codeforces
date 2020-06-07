
// Problem Link https://codeforces.com/problemset/problem/318/A

#include <iostream>
#include <cmath>

using namespace std;

int main() {
    long long n, k;
    cin >> n >> k;

    long long mid = ceil(n / 2.0);

    if (k <= mid) {
        cout << (2 * k - 1) << "\n";
    } else {
        cout << (2 * (k - mid)) << "\n";
    }
}