#include <iostream>
using namespace std;

int main() {
    int a;
    cin >> a;
    
    double firstNum = 100.0 / a;
    double secondNum = 100.0 / (100.0 - a);
    cout << firstNum << endl << secondNum << endl;
}