
// Problem Link https://codeforces.com/problemset/problem/133/A

#include <iostream>

using namespace std;

int main() {
    string str;
    cin >> str;

    bool output = false;
    for(char c : str) {
        if( c == 'H' || c == 'Q' || c == '9') {
            output = true;
            break;
        }
    }

    if(output) {
        cout << "YES" << "\n";
    } else {
        cout << "NO" << "\n";
    }
}