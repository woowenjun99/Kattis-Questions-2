// ***Even Up Solitaire Solution***
// Difficulty: 2.5
// Time Limit: 1 second, Memory Limit: 1024 MB
// Acceptance: 40%
// CPU Time: 0.01 s
// Author: Howard Cheng
// Source: 2013 ACM-ICPC North American Qualifier
// Link: https://open.kattis.com/problems/evenup


#include <iostream>
#include <stack>
using namespace std;

int main() {
    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    
    int n; cin >> n;
    stack<int> s;

    for (int i = 0; i < n; ++i) {
        int a; cin >> a;
        
        if (s.empty()) {
            s.push(a);
            continue;
        } else if ((s.top() + a) % 2 == 0) {
            s.pop();
            continue;
        }
        s.push(a);
    }

    cout << s.size() << endl;
    return 0;
}
