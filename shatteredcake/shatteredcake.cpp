// ***Shattered Cake Solution***
// Difficulty: 1.4
// Time Limit: 6 seconds, Memory Limit: 1024 MB
// Acceptance: 64%
// CPU Time: 1.04 s
// Author: Silviu Maniu
// Source: Southwestern Europe Regional Contest (SWERC) 2017
// Link: https://open.kattis.com/problems/shatteredcake


#include <iostream>
using namespace std;

int main() {
    long long width, num, area = 0; cin >> width >> num;
    for (long long i = 0; i < num; ++i) {
        long a, b; cin >> a >> b;
        area += (a * b);
    }
    cout << area / width;
}
