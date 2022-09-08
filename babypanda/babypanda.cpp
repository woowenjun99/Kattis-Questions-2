// ***Baby Panda Solution***
// Difficulty: 3.2
// Time Limit: 1 second, Memory Limit: 1024 MB
// Acceptance: 55%
// CPU Time: 0.00 s
// Author: Jacob Zhang
// Source: CodeSprint LA 2021
// Link: https://open.kattis.com/problems/babypanda


#include <bits/stdc++.h>
using namespace std;

int main() {
    long m, n; cin >> m >> n;
    long counter = 0;
    while (n != 0) {
        if (n % 2 == 1) counter++;
        n /= 2;
    }
    cout << counter << "\n";
}
