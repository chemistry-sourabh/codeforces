// Problem Link https://codeforces.com/problemset/problem/1364/B
#include <iostream>
#include <vector>

using namespace std;

int main() {
    int t;
    cin >> t;

    int n;
    int *p;
    int a, b;
    for (int ti = 0; ti < t; ti++) {
        cin >> n;
        p = new int[n];

        for (int i = 0; i < n; i++) {
            cin >> p[i];
        }

        vector<int> sub;

        a = p[0];
        b = p[1];
        sub.push_back(a);
        for (int i = 2; i < n; i++) {
            if ((a < b && b < p[i]) || (a > b && b > p[i])) {
                b = p[i];
            } else {
                sub.push_back(b);
                a = b;
                b = p[i];
            }
        }

        sub.push_back(b);

        cout << sub.size() << "\n";
        bool first = true;
        for (int s : sub) {
            if (!first) {
                cout << " ";
            }
            cout << s;
            first = false;
        }
        cout << "\n";
    }
}