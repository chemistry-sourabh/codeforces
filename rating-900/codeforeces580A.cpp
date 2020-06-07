
// Problem Link https://codeforces.com/problemset/problem/580/A

#include <iostream>

using namespace std;

int main() {
    int n;
    cin >> n;

    int arr[n];

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int maxLength = 0;
    int curLength = 1;
    for (int i = 1; i < n; i++) {
        if( arr[i] >= arr[i-1] ) {
            curLength++;
        } else if( curLength > maxLength ) {
            maxLength = curLength;
            curLength = 1;
        } else {
            curLength = 1;
        }
    }

    if( curLength > maxLength ) {
        maxLength = curLength;
    }

    cout << maxLength << "\n";
}