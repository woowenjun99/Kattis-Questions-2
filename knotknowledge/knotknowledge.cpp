// ***Knot Knowledge Solution***
// Difficulty: 1.4
// Time Limit: 1 second, Memory Limit: 1024 MB
// Acceptance: 65%
// CPU Time: 0.00 s
// Author: Bergur Snorrason
// Source: Nordic Collegiate Programming Contest (NCPC) 2021
// Link: https://open.kattis.com/problems/knotknowledge


#include <iostream>
#include <unordered_set>
using namespace std;

int main() {
    int n; cin >> n;
    unordered_set<int> nums;
    for (int i = 0; i < n; ++i) {
        int m; cin >> m; nums.insert(m);
    }

    for (int i = 0; i < n - 1; i++) {
        int m; cin >> m; 
        nums.erase(m);
    }

    cout << *nums.begin();
}
