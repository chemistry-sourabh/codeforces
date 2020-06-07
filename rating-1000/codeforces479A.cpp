// Problem Link https://codeforces.com/problemset/problem/479/A
#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    int a, b, c;
    cin >> a >> b >> c;

    int exp[] = {
            (a+b)*c,
            a+(b*c),
            a*(b+c),
            (a*b)+c,
            a*b*c,
            a+b+c
    };

    int *max = max_element(exp, exp+6);
    cout << *max << "\n";
}