// ***Average Character Solution***
// Difficulty: 1.7
// Time Limit: 1 second, Memory Limit: 2048 MB
// Acceptance: 47%
// CPU Time: 0.00 s
// Author: No author
// Source: No source
// Link: https://open.kattis.com/problems/averagecharacter


using namespace std;
#include <string> // getline, string
#include <iostream> // cin, cout
#include <cmath> // round()

int sumASCII(string letter)
{
    int sum = 0;
    for (int i = 0; i < letter.length(); i++)
    {
        char x = letter.at(i);
        sum += int(x);
    }
    return sum;
}

int main(){
    string a;
    getline(cin, a);
    int total;
    total = sumASCII(a);
    int len;
    len = a.length();
    double avg = total / len;
    avg = floor(avg);
    cout << char(avg);
}
