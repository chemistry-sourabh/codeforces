
// Problem Link https://codeforces.com/problemset/problem/460/A

#include <iostream>
#include <cmath>

using namespace std;

int main() {
    int n, m;
    cin >> n >> m;

    int k = ceil(n / ( 1.0 * (m - 1) ));

    cout << (n + k - 1) << "\n";
}