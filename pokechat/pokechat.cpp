// ***Pokechat Solution***
// Difficulty: 1.4
// Time Limit: 1 second, Memory Limit: 1024 MB
// Acceptance: 75%
// CPU Time: 0.00 s
// Author: Carson Cox
// Source: CodeSprint LA 2022
// Link: https://open.kattis.com/problems/pokechat


#include <iostream>
#include <string>
using namespace std;

int main() {
    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);

    string word; 
    getline(cin, word);
    char a, b, c;
    while (cin >> a >> b >> c) {
        string new_word;
        new_word.push_back(a);
        new_word.push_back(b);
        new_word.push_back(c);
        int index = stoi(new_word);
        cout << word[index - 1];
    }
    return 0;
}
