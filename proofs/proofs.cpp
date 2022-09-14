// ***Proofs Solution***
// Difficulty: 2.4
// Time Limit: 3 seconds, Memory Limit: 1024 MB
// Acceptance: 54%
// CPU Time: 0.44 s
// Author: Joseph Swernofsky
// Source: KTH Challenge 2020
// Link: https://open.kattis.com/problems/proofs


#include <bits/stdc++.h>
using namespace std;

int main() {
    unordered_set<string> s;
    int x, counter = 1; cin >> x; cin.ignore();

    while (x--) {
        string y; cin >> y;
        while (y != "->") {
            if (s.find(y) == s.end()) {
                cout << counter;
                return 0;
            }
            cin >> y;
        }

        cin >> y;
        counter++;
        s.insert(y);
    }
    cout << "correct";
    return 0;
}
