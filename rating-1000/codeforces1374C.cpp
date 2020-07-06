// Problem Link https://codeforces.com/problemset/problem/1374/C
#include <iostream>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin >> t;

    int n;
    string s;
    for (int ti = 0; ti < t; ti++) {
        cin >> n;
        cin >> s;

        int l, r;
        l = 0;
        r = 0;
        int a, b;
        a = 0;
        b = 0;
        for(int i = n -1; i >= 0; i--) {
            if( s[i] == '(') {
                l++;
                if( l > r) {
                    a++;
                    r++;
                }
            } else {
                r++;
            }
        }

        for(int i = 0; i < n; i++) {
            if( s[i] == '(') {
                l++;
            } else {
                r++;
                if( r > l) {
                    b++;
                    l++;
                }
            }
        }

        if(a < b) {
            cout << a << "\n";
        } else {
            cout << b << "\n";
        }
    }
}