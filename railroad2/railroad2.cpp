// ***Railroad Solution***
// Difficulty: 1.5
// Time Limit: 1 second, Memory Limit: 1024 MB
// Acceptance: 65%
// CPU Time: 0.00 s
// Author: Godmar Back
// Source: 2016 Virginia Tech High School Programming Contest
// Link: https://open.kattis.com/problems/railroad2


#include <iostream>

int main() {
    int a, b;
    std::cin >> a >> b;
    std::cout << (b % 2 ? "impossible" : "possible");
    return 0;
}
