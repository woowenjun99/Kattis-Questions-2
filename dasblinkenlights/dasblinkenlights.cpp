// ***Das Blinkenlights Solution***
// Difficulty: 1.7
// Time Limit: 1 second, Memory Limit: 1024 MB
// Acceptance: 46%
// CPU Time: 0.00 s
// Author: No author
// Source: No source
// Link: https://open.kattis.com/problems/dasblinkenlights


#include <iostream>
using namespace std;

int main() {
    ios::sync_with_stdio(false); cin.tie(NULL);
    long p, q, r; cin >> p >> q >> r;
    for (long i = 1; i <= r; ++i) {
        if (i % p == 0 && i % q == 0) {
            cout << "yes";
            return 0;
        }
    }
    cout << "no";
    return 0;
}
