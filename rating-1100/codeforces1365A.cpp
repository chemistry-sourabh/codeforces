// Problem Link https://codeforces.com/problemset/problem/1365/A
#include <iostream>
#include <set>

using namespace std;

int main() {
    int t;
    cin >> t;

    int n, m;
    int num;
    set<int> rows;
    set<int> cols;
    int rcount = 0;
    int ccount = 0;

    int turns = 0;
    for (int ti = 0; ti < t; ti++) {
        rows.clear();
        cols.clear();
        cin >> n >> m;
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                cin >> num;
                if ( num == 1) {
                    rows.insert(i);
                    cols.insert(j);
                }
            }
        }

        rcount = n - rows.size();
        ccount = m - cols.size();

        if (rcount < ccount) {
            turns = rcount;
        } else {
            turns = ccount;
        }

        if (turns % 2 == 0) {
            cout << "Vivek" << "\n";
        } else {
            cout << "Ashish" << "\n";
        }
    }
}
