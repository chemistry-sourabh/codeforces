// Problem Link https://codeforces.com/problemset/problem/1362/B

#include <iostream>
#include <unordered_set>

using namespace std;

int main() {
    int t;
    int n;
    int num;
    unsigned int sk;
    int max = -1;
    unordered_set<unsigned int> s;
    cin >> t;
    for (int ti = 0; ti < t; ti++) {
        cin >> n;
        s.clear();
        for (int i = 0; i < n; i++) {
            cin >> num;
            if (num > max) {
                max = num;
            }
            s.insert(num);
        }

        bool found;
        for (unsigned int k = 1; k < 1024; k++) {
            found = true;
            for (unsigned int e : s) {
                sk = e ^ k;
                if (s.count(sk) == 0) {
                    found = false;
                    break;
                }
            }

            if (found) {
                cout << k << "\n";
                break;
            }
        }

        if (!found) {
            cout << "-1" << "\n";
        }
    }
}