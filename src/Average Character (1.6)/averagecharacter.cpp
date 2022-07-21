#include <iostream>
#include <string>
using namespace std;

int main()
{
    string input;
    getline(cin, input);

    unsigned long long sum = 0;
    if (input.size() > 1)
    {
        for (int i = 0; i < input.size(); i++)
        {
            sum += int(input[i]);
        }

        int average = sum / input.size();
        cout << char(average);
    }
    else
    {
        cout << input;
    }
}