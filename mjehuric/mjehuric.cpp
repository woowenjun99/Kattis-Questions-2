// ***Mjehuric Solution***
// Difficulty: 1.6
// Time Limit: 1 second, Memory Limit: 1024 MB
// Acceptance: 55%
// CPU Time: 0.00 s
// Author: No author
// Source: Croatian Open Competition in Informatics 2008/2009, contest #4
// Link: https://open.kattis.com/problems/mjehuric


#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<long> nums(5);
    for (long i = 0; i < 5; ++i) cin >> nums[i];
    for (long i = 0; i < 5; ++i) {
        for (long j = 0; j < 4 - i; ++j) {
            if (nums[j] > nums[j + 1]) {
                swap(nums[j], nums[j + 1]);
                for (long k: nums) cout << k << " ";
                cout << endl;
            }
        }
    }
}
