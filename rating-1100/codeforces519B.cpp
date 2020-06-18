// Problem Link https://codeforces.com/problemset/problem/519/B
#include <iostream>
#include <unordered_map>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    long long n;
    cin >> n;

    long long num;
    auto s1 = unordered_map<long long, long long>();
    auto s2 = unordered_map<long long, long long>();
    auto s3 = unordered_map<long long, long long>();
    for (long long i = 0; i < n; i++) {
        cin >> num;
        s1[num]++;
    }

    for (long long i = 0; i < n - 1; i++) {
        cin >> num;
        s2[num]++;
    }

    for (long long i = 0; i < n - 2; i++) {
        cin >> num;
        s3[num]++;
    }

    long long first = 0;
    long long second = 0;
    for (pair<long long, long long> v : s1) {
        long long e = v.first;
        long long c1 = v.second;
        long long c2 = s2[e];
        long long c3 = s3[e];
        if (c1 == c3 + 1 && c1 == c2 + 1) {
            first = e;
        } else if( c1 == c3 + 2) {
            first = e;
            second = e;
            break;
        }

        if (c1 == c3 + 1 && c1 == c2) {
            second = e;
        }

        if (first > 0 && second > 0) {
            break;
        }
    }

    cout << first << "\n";
    cout << second << "\n";
}