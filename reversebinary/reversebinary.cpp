// ***Reversed Binary Numbers Solution***
// Difficulty: 1.6
// Time Limit: 1 second, Memory Limit: 1024 MB
// Acceptance: 61%
// CPU Time: 0.00 s
// Author: Emma Enström
// Source: KTH Challenge 2011
// Link: https://open.kattis.com/problems/reversebinary


#include <algorithm>
#include <cmath>
#include <iostream>
#include <stack>
#include <string>
using namespace std;
stack<char> s;

string atob(unsigned long long x) {
    string sum;

    // TIME COMPLEXITY: O(log N)
    while (x > 0) {
        if (x % 2) sum.push_back('1');
        else sum.push_back('0');
        x /= 2;
    }

    while (sum.size()) {
        s.push(sum.back());
        sum.pop_back();
    }

    while (not s.empty()) {
        sum.push_back(s.top());
        s.pop();
    }

    return sum;
}

int main() {
    unsigned long long x; cin >> x;

    // STORING THE NUMBERS IN STRING AND SWAPPING IT
    string str = atob(x);
    cout << stoull(str, 0, 2);
    return 0;
}
