
// Problem Link https://codeforces.com/problemset/problem/208/A

#include <iostream>

using namespace std;

int main() {
    string str;
    cin >> str;

    while (true) {
        size_t found = str.find("WUB");
        if (found != string::npos) {
            str.replace(str.find("WUB"), 3, " ");
        } else {
            break;
        }
    }

    int start = -1;
    bool first = true;
    string sub;
    for (int i = 0; i < str.length(); i++) {
        if (start == -1 && str[i] != ' ') {
            start = i;
        } else if (start != -1 && str[i] == ' ') {
            if (!first) {
                cout << " ";
            }
            sub = str.substr(start, i - start);
            cout << sub;
            first = false;
            start = -1;
        }
    }

    if (start != -1) {
        cout << " " << str.substr(start, str.length() - start);
    }

    cout << "\n";
}