// ***Quick Brown Fox Solution***
// Difficulty: 1.7
// Time Limit: 1 second, Memory Limit: 1024 MB
// Acceptance: 52%
// CPU Time: 0.00 s
// Author: David Sturgill
// Source: 2015 ICPC North American Qualifier Contest
// Link: https://open.kattis.com/problems/quickbrownfox


#include <iostream>
#include <string>
using namespace std;

int main() {
    int x; cin >> x; cin.ignore();
    for (int i = 0; i < x; ++i) {
        bool alpha[26] = {false};
        string y; getline(cin, y);
        for (int j = 0; j < y.size(); j++) {
            if (y[j] >= 'a' && y[j] <= 'z') {
                alpha[y[j] - 'a'] = true;
                continue;
            } 
            
            if (y[j] >= 'A' && y[j] <= 'Z') {
                alpha[y[j] - 'A'] = true;
                continue;
            }
        }
        
        string missing = "";
        for (int k = 0; k < 26; ++k) {
            if (!alpha[k]) missing.push_back(k + 'a');
        }
        
        if (missing.size()) {
            cout << "missing " << missing << "\n";
        } else {
            cout << "pangram\n";
        }
    }
}
