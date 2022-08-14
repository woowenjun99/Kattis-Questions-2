// ***Baloni Solution***
// Difficulty: 3.2
// Time Limit: 4 seconds, Memory Limit: 1024 MB
// Acceptance: 34%
// CPU Time: 0.22 s
// Author: No author
// Source: No source
// Link: https://open.kattis.com/problems/baloni


/*
    Note: We create a unordered_multimap that keeps track of 
    the following. (currentHeight, indexFired) Whenever a balloon
    is hit, we will reduce the height of the balloon by 1.
*/

#include <iostream>
#include <unordered_map>
using namespace std;

int main() {
    long x, arrows = 0; 
    cin >> x;
    unordered_multimap<long, long> heightOfArrows;

    for (long i = 0; i < x; ++i) {
        long balloon; cin >> balloon;
        if (heightOfArrows.find(balloon) != heightOfArrows.end()) {
            long tempIndex = heightOfArrows.find(balloon)->second;
            heightOfArrows.erase(heightOfArrows.find(balloon));
            if (balloon != 1) {
                heightOfArrows.insert(pair<long, long>(balloon - 1, tempIndex));
            }
            continue;   
        }
        arrows++;
        heightOfArrows.insert(pair<long, long>(balloon - 1, i + 1));
    }
    cout << arrows;
}
