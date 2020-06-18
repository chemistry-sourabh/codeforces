// Problem Link https://codeforces.com/problemset/problem/158/B
#include <iostream>

using namespace std;

int main() {
    long long n;
    cin >> n;

    long long s[] = {0, 0, 0, 0};
    int num;

    for (int i = 0; i < n; i++) {
        cin >> num;
        s[num - 1]++;
    }

    long long c = 0;
    c += s[3];
    c += s[2];
    s[0] -= s[2];
    if (s[0] < 0) {
        s[0] = 0;
    }
    c += (s[1] / 2);
    s[1] = s[1] % 2;
    c += s[1];
    s[0] -= (s[1] * 2);
    c += s[0] / 4;
    s[0] = s[0] % 4;
    if (s[0] > 0) {
        c += 1;
    }

    cout << c << "\n";
}