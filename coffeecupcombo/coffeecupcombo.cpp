// ***Coffee Cup Combo Solution***
// Difficulty: 1.4
// Time Limit: 1 second, Memory Limit: 1024 MB
// Acceptance: 62%
// CPU Time: 0.00 s
// Author: Johan Sannemo
// Source: Nordic Collegiate Programming Contest (NCPC) 2022
// Link: https://open.kattis.com/problems/coffeecupcombo


#include <iostream>
using namespace std;

int main() {
    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);

    int coffee = 0, lessons = 0;
    int n; cin >> n;
    for (long i = 0; i < n; ++i) {
        char c; cin >> c;
        if (c == '1') {
            coffee = 2;
            lessons++;
            continue;
        } else if (coffee) {
            coffee--;
            lessons++;
        }
    }
    cout << lessons;
    return 0;
}
