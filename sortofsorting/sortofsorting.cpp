// ***Sort of Sorting Solution***
// Difficulty: 2.0
// Time Limit: 2 seconds, Memory Limit: 1024 MB
// Acceptance: 44%
// CPU Time: 0.04 s
// Author: No author
// Source: No source
// Link: https://open.kattis.com/problems/sortofsorting


#include <algorithm>
#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main() {
    long x; cin >> x;
    while (x) {
        vector<string> words(x);
        for (long i = 0; i < x; ++i) cin >> words[i];
        stable_sort(words.begin(), words.end(), [](string a, string b) {
            if (a[0] != b[0]) return a[0] < b[0];
            return a[1] < b[1];
        });
        for (string x: words) cout << x << "\n";
        cout << "\n";
        cin >> x;
    }
}
