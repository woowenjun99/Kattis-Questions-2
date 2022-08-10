// ***Successful Zoom Solution***
// Difficulty: 3.8
// Time Limit: 1 second, Memory Limit: 1024 MB
// Acceptance: 42%
// CPU Time: 0.03 s
// Author: No author
// Source: No source
// Link: https://open.kattis.com/problems/successfulzoom


#include <cmath>
#include <iostream>
#include <vector>
using namespace std;

int main() {
    typedef unsigned long long ull;
    ull x; cin >> x;
    vector<ull> nums(x);
    long long answer = -1;
    for (ull i = 0; i < x; ++i) cin >> nums[i];

    for (ull i = 1; i <= (x / 2); ++i) {
        ull prev = nums[i - 1];
        bool isBroken = false;
        ull start = 2 * i;

        while (start <= x && not isBroken) {
            if (nums[start - 1] <= prev) {
                isBroken = true;
            }
            prev = nums[start - 1];
            start += i;
        }

        if (not isBroken) {
            answer = i;
            break;
        }
    }

    if (answer == -1) {
        cout << "ABORT!";
    } else {
        cout << answer;
    }
    return 0;
}
