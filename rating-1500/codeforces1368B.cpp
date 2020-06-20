// Problem Link https://codeforces.com/problemset/problem/1368/B
#include <iostream>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    unsigned long long k;

    cin >> k;

    string a = "codeforces";
    unsigned long long num[] = {1, 1, 1, 1, 1, 1, 1, 1, 1, 1};

    unsigned long long c = 1;
    int i = 0;
    while (c < k) {
        num[i]++;
        c = 1;
        for (int j = 0; j < 10; j++) {
            c *= num[j];
        }
        i = ( i + 1 ) % 10;
    }

    for (int j = 0; j < 10; j++) {
        for (int l = 0; l < num[j]; l++) {
            cout << a[j];
        }
    }

    cout << "\n";
}