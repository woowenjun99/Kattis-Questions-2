#include <iostream>
#include <vector>
using namespace std;

vector<bool> setup() {
    int totalSeats, totalSeated;
    cin >> totalSeats >> totalSeated;
    
    vector<bool> seats(totalSeats);
    for (int i = 0; i < totalSeats; i ++) {
        seats[i] = false;
    }
    
    for (int i = 0; i < totalSeated; i ++) {
        int position;
        cin >> position;
        seats[position - 1] = true;
    }
    return seats;
}

int main() {
    vector<bool> seats = setup();
 
    int counter = 0;
    int vectSize = seats.size();

    for (int i = 0; i < vectSize; i ++) {
        if (i == 0) {
            if (!seats[vectSize - 1] && !seats[1] && !seats[0]) {
                seats[0] = true;
                counter ++;
            }
            continue;
        }
        
        if (i == vectSize - 1) {
            if (!seats[0] && !seats[vectSize - 2] && !seats[i]) {
                seats[i] = true;
                counter ++;
            }
            continue;
        }
        
        if (!seats[i - 1] && !seats[i] && !seats[i + 1]) {
            seats[i] = true;
            counter ++;
        }
    }
    
    cout << counter; 
}
