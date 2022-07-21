#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main()  {
    int n;
    cin >> n;
    vector<string> wordsToPrint(n);
    for (int i = 0; i < n; i++) {
        cin >> wordsToPrint[i];
    }
    for (int i = 0; i < n; i++) {
        int wordSize = wordsToPrint[i].size();
        for (int j = 0; j < wordSize; j++)    {
            char letter = wordsToPrint[i][j];
            bool isVowel = letter == 'a' || letter == 'e' || letter == 'i' || letter == 'o' || letter == 'u';
            bool isSameAsNext = ((j < wordSize - 1) && (letter == wordsToPrint[i][j + 1]));

            if ((j == 0 || j == wordSize - 1) && isVowel)  {
                cout << letter;
                continue;
            } else if (isVowel || isSameAsNext)   {
                continue;
            }

            cout << letter;
        }
        cout << " ";
    }
}