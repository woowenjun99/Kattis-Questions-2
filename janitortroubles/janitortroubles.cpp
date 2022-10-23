// ***Janitor Troubles Solution***
// Difficulty: 1.4
// Time Limit: 1 second, Memory Limit: 1024 MB
// Acceptance: 69%
// CPU Time: 0.00 s
// Author: No author
// Source: Benelux Algorithm Programming Contest (BAPC) 2018
// Link: https://open.kattis.com/problems/janitortroubles


#include <cmath>
#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    double a, b, c, d; cin >> a >> b >> c >> d;
    double s = (a + b + c + d)/(2 * 1.0);
    cout << fixed << setprecision(6) << sqrt((s - a) * (s - b) * (s - c) * (s - d));
    return 0;
}
