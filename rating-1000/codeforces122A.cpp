// Problem Link https://codeforces.com/problemset/problem/122/A
#include <iostream>

using namespace std;

int main() {
    int n;
    cin >> n;

    int lucky[] = {4, 7, 44, 47, 74, 77, 444, 447, 474, 477, 744, 747, 774, 777};

    bool almost = false;
    for (int l : lucky) {
        if (n % l == 0) {
            almost = true;
            break;
        }
    }

    if (almost) {
        cout << "YES" << "\n";
    } else {
        cout << "NO" << "\n";
    }
}