
// Problem Link https://codeforces.com/problemset/problem/1/A

#include <iostream>
#include <cmath>

using namespace std;

int main() {
    long long n, m, a;
    cin >> n >> m >> a;

    long long c = ceil((n * 1.0) / a) * ceil((m * 1.0) / a);

    cout << c << "\n";
}