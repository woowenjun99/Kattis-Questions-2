// ***Patuljci Solution***
// Difficulty: 1.8
// Time Limit: 1 second, Memory Limit: 1024 MB
// Acceptance: 55%
// CPU Time: 0.00 s
// Author: No author
// Source: Croatian Open Competition in Informatics 2006/2007, contest #3
// Link: https://open.kattis.com/problems/patuljci


#include <iostream>
#include <numeric>
#include <unordered_map>
#include <vector>
using namespace std;
unordered_map<int, int> mappers;

int main() {
    vector<int> hats(9);
    for (int &hat: hats) cin >> hat;
    int sum = accumulate(hats.begin(), hats.end(), 0);
    // Two Sum with 9 digits
    sum -= 100;

    int position_1, position_2;
    for (int i = 0; i < 9; ++i) {
        if (mappers.find(hats[i]) == mappers.end()) {
            int difference = sum - hats[i];
            mappers[difference] = i;
            continue;
        }
        position_1 = mappers[hats[i]], position_2 = i;
        break;
    }

    for (int i = 0; i < 9; ++i) {
        if (i != position_1 && i != position_2) cout << hats[i] << endl;
    }
    return 0;
}
