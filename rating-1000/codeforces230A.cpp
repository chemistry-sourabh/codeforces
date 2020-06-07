// Problem Link https://codeforces.com/problemset/problem/230/A
#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    int s, n;
    cin >> s >> n;

    pair<int, int> d[n];

    int x,y;
    for(int i=0; i<n; i++) {
        cin >> x >> y;
        d[i] = pair<int, int>(x, y);
    }

    sort(d, d+n);

    bool win = true;
    for( int i=0; i<n; i++) {
        x = d[i].first;
        y = d[i].second;

        if(s > x) {
            s += y;
        } else {
            win = false;
        }
    }

    if(win) {
        cout << "YES" << "\n";
    } else {
        cout << "NO" << "\n";
    }
}