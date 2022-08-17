// ***Thanos Solution***
// Difficulty: 2.5
// Time Limit: 1 second, Memory Limit: 1024 MB
// Acceptance: 32%
// CPU Time: 0.00 s
// Author: No author
// Source: No source
// Link: https://open.kattis.com/problems/thanos


#include <iostream>
using namespace std;
typedef unsigned long long ull;

int main(){
    long T; cin >> T;
    while (T--) {
        ull P, R, F; cin >> P >> R >> F;
        long year = 0;
        while (P <= F) {
            ++year;
            P *= R;
        }
        cout << year << "\n";
    }
    return 0;
}
