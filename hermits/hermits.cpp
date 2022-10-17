// ***Hermits Solution***
// Difficulty: 3.6
// Time Limit: 1 second, Memory Limit: 1024 MB
// Acceptance: 31%
// CPU Time: 0.16 s
// Author: Johan Sannemo
// Source: Principles of Algorithmic Problem Solving
// Link: https://open.kattis.com/problems/hermits


#include <iostream>
#include <unordered_map>
#include <vector>
using namespace std;

struct Street {
    int initial;
    int final;
};

int main() {
    // freopen("in.txt", "r", stdin);

    int a; cin >> a;
    vector<Street> people_in_street(a);
    for (int i = 0; i < a; ++i) {
        int b; cin >> b;
        Street street = {b, b};
        people_in_street[i] = street; 
    }

    // Number of streets that cross
    cin >> a;
    for (int i = 0; i < a; ++i) {
        int b, c; cin >> b >> c;
        people_in_street[b - 1].final += people_in_street[c - 1].initial;
        people_in_street[c - 1].final += people_in_street[b - 1].initial;
    }

    int min_so_far = people_in_street[0].final, index = 0;
    for (int i = 0; i < people_in_street.size(); ++i) {
        if (people_in_street[i].final < min_so_far) {
            min_so_far = people_in_street[i].final;
            index = i;
        }
    }

    cout << index + 1;
    return 0;
}
