// ***Heir's Dilemma Solution***
// Difficulty: 1.6
// Time Limit: 1 second, Memory Limit: 1024 MB
// Acceptance: 65%
// CPU Time: 0.07 s
// Author: No author
// Source: 2018 ICPC Mid-Central Regional
// Link: https://open.kattis.com/problems/heirsdilemma


#include <iostream>
#include <unordered_set>
using namespace std;

bool checkDivisible(long i) {
    unordered_set<long> number;
    long cloned = i;
    while (cloned > 0) {
        long denominator = cloned % 10;
        if (denominator == 0) return false;
        if (number.find(denominator) == number.end() && i % denominator == 0) {
            number.insert(denominator);
            cloned /= 10;
            continue;
        }
        return false;
    }
    return true;
}

int main() {
    long x, y, counter = 0; cin >> x >> y;
    for (long i = x; i <= y; ++i) {
        if (checkDivisible(i)) counter++;
    }
    cout << counter;
}
