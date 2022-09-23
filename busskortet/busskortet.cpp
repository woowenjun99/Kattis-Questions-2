// ***The Bus Card Solution***
// Difficulty: 1.9
// Time Limit: 1 second, Memory Limit: 1024 MB
// Acceptance: 73%
// CPU Time: 0.00 s
// Author: No author
// Source: Programmeringsolympiadens skolkval 2010
// Link: https://open.kattis.com/problems/busskortet


#include <iostream>
using namespace std;

int main() {
    int x, transactions = 0; cin >> x;
    while (x >= 500) {
        transactions++;
        x -= 500;
    }
    
    while (x >= 200) {
        transactions++;
        x-= 200;
    }
    
    transactions = transactions == 0 ? transactions : transactions + 1;
    
    cout << transactions;
}
