//
// Created by Sourabh Bollapragada on 6/3/20.
//

// Problem Link https://codeforces.com/problemset/problem/1363/A

#include <iostream>

int main() {
    int t;
    int n, x;
    int num;
    int e, o;
    int *arr;

    std::cin >> t;
    for (int i = 0; i < t; i++) {
        std::cin >> n >> x;

        e = 0;
        o = 0;
        for (int j = 0; j < n; j++) {
            std::cin >> num;
            if (num % 2 == 0) {
                e++;
            } else {
                o++;
            }
        }

        if (o + e == x && o > 0 && o % 2 == 1) {
            std::cout << "Yes" << std::endl;
        } else if (o + e > x && o > 0) {
            if (x % 2 == 0 && e == 0) {
                std::cout << "No" << std::endl;
            } else {
                std::cout << "Yes" << std::endl;
            }
        } else {
            std::cout << "No" << std::endl;
        }
    }
}