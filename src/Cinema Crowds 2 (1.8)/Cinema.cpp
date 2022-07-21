#include <iostream>
#include <vector>
using namespace std;

int main() {
    int M, N;
    cin >> M >> N;
    int groups = N;
    vector<int> inputs(N);

    for (int i = 0; i < N; i++) {
        cin >> inputs[i];
    }

    for (int i = 0; i < N; i ++) {
        if (M - inputs[i] >= 0) {
            M -= inputs[i];
            groups --;
        } else {
            break;
        }
    }

    cout << groups << endl;
}