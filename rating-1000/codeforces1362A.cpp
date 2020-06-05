// Problem Link https://codeforces.com/problemset/problem/1362/A

#include <iostream>

using namespace std;

int main() {
    int t;
    long long a, b;
    int ops = 0;
    cin >> t;
    for (int i = 0; i < t; i++) {
        cin >> a >> b;
        ops = 0;
        if (a == b) {
            cout << ops << "\n";
        } else if (a < b) {
            while (a < b) {
                if (a * 8 <= b) {
                    a = a * 8;
                    ops++;
                } else if (a * 4 <= b) {
                    a = a * 4;
                    ops++;
                } else if (a * 2 <= b) {
                    a = a * 2;
                    ops++;
                } else {
                    break;
                }
            }
            if (a == b) {
                cout << ops << "\n";
            } else {
                cout << "-1" << "\n";
            }
        } else if (a > b) {
            while (a > b) {
                if (a % 8 == 0 && a / 8 >= b) {
                    a = a / 8;
                    ops++;
                } else if (a % 4 == 0 && a / 4 >= b) {
                    a = a / 4;
                    ops++;
                } else if (a % 2 == 0 && a / 2 >= b) {
                    a = a / 2;
                    ops++;
                } else {
                    break;
                }
            }
            if (a == b) {
                cout << ops << "\n";
            } else {
                cout << "-1" << "\n";
            }
        }
    }

}