// Problem Link https://codeforces.com/problemset/problem/270/A
#include <iostream>
#include <cmath>

using namespace std;

int main() {
    int t;
    cin >> t;

    int a;
    for (int i = 0; i < t; i++) {
        cin >> a;
        double y = 360 % (180 - a);

        if(y > 0) {
            cout << "NO" << "\n";
        } else {
            cout << "YES" << "\n";
        }
    }
}