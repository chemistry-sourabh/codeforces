// Problem Link https://codeforces.com/problemset/problem/131/A
#include <iostream>

using namespace std;

void fix(string s) {
    for (int i = 0; i < s.length(); i++) {
        char c = s[i];
        if (islower(c)) {
            cout << (char) toupper(c);
        } else {
            cout << (char) tolower(c);
        }
    }

    cout << "\n";
}

int main() {
    string s;
    cin >> s;

    bool needToFix = true;
    for (int i = 1; i < s.length(); i++) {
        if (islower(s[i])) {
            needToFix = false;
        }
    }

    if(needToFix) {
        fix(s);
    } else {
        cout << s << "\n";
    }

}