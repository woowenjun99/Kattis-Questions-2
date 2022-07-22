#include <iostream>
#include <vector>
using namespace std;

vector<bool> createVect(int S) {
    vector<bool> arr(S);
    for (int i = 0; i < S; i ++) {
        arr[i] = false;
    }
    return arr;
}

int main() {
    int S, N;
    cin >> S >> N;
    vector<bool> arr = createVect(S);
    for (int i = 0; i < N; i++) {
        int x;
        cin >> x;
        arr[x] = true;
    }
    
    int max = 0;
    
    if (!arr[0] && !arr[1] && !arr[arr.size() - 1]) {
        arr[0] = true;
        max ++;
    }

    if (!arr[0] && !arr[arr.size() - 2] && !arr[arr.size() - 1]) {
        arr[arr.size() - 1] = true;
        max ++;
    }

    for (int i = 1; i < S - 1; i ++) {
        if (arr[i] == true) {
            continue;
        }
        
        if (!arr[i - 1] && !arr[i + 1]) {
            arr[i] = true;
            max += 1;
        }
    }
    
    cout << max;
}