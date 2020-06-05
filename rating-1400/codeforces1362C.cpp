// Problem Link https://codeforces.com/problemset/problem/1362/C

#include <iostream>
#include <cmath>

using namespace std;

int main() {
    int t;
    unsigned long long n;
    unsigned long long num;
    unsigned long long diff = 0;
    cin >> t;

    for (int ti = 0; ti < t; ti++) {
        cin >> n;
        diff = 0;
        int b = 1;
        while (n != 0) {
            num = n & 1;
            if (num == 1) {
                diff += (unsigned long long) pow(2, b) - 1;
            }
            b++;
            n = n >> 1u;
        }

        cout << diff << "\n";
    }
}