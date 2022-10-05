// ***Primality Solution***
// Difficulty: 3.3
// Time Limit: 1 second, Memory Limit: 1024 MB
// Acceptance: 40%
// CPU Time: > 1.00 s
// Author: Johan Sannemo
// Source: Principles of Algorithmic Problem Solving
// Link: https://open.kattis.com/problems/primality


#include <cmath>
#include <iostream>
using namespace std;

bool isPrime(long long x) {
    for (long long i = 2; i <= sqrt(x); ++i) {
        if (x % i == 0) return false;
    }
    return true;
}

int main() {
    long long x; cin >> x;
    bool res = isPrime(x);
    if (res) cout << "YES";
    else cout << "NO";
    return 0;
}
