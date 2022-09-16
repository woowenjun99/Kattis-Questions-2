// ***Datum Solution***
// Difficulty: 1.4
// Time Limit: 1 second, Memory Limit: 1024 MB
// Acceptance: 61%
// CPU Time: 0.00 s
// Author: No author
// Source: Croatian Open Competition in Informatics 2008/2009, contest #4
// Link: https://open.kattis.com/problems/datum


#include <iostream>
#include <string>
using namespace std;

int main() {
    int days[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30};
    int a, b; cin >> a >> b;
    int day_count = 0;
    for (int i = 0; i < b - 1; ++i) {
        day_count += days[i];
    }
    day_count += a;
    string day_map[7] = {"Wednesday","Thursday", "Friday", "Saturday", "Sunday", "Monday", "Tuesday"};
    
    cout << day_map[day_count % 7];
}
