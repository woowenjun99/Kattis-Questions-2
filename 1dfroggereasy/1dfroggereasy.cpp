// ***1-D Frogger (Easy) Solution***
// Difficulty: 3.6
// Time Limit: 1 second, Memory Limit: 1024 MB
// Acceptance: 22%
// CPU Time: 0.00 s
// Author: Liam Keliher
// Source: Mount Allison Programming Showdown (MAPS 2022)
// Link: https://open.kattis.com/problems/1dfroggereasy


#include <iostream>
#include <vector>

int main() {
    std::ios::sync_with_stdio(0);
    std::cin.tie(0);
    std::cout.tie(0);

    int n, s, m, steps = 0;
    std::cin >> n >> s >> m;
    int current = s - 1;
    std::vector<int> board(n);
    std::vector<bool> stepped(n, false);
    for (int &b: board) std::cin >> b;

    while (true) {
        // IN A CYCLE
        if (stepped[current]) {
            std::cout << "cycle\n" << steps;
            return 0;
        }

        int num = board[current];
        stepped[current] = true;

        // AT MAGIC NUMBBER
        if (num == m) {
            std::cout << "magic\n" << steps;
            return 0;
        }

        current += num;
        steps += 1;

        if (current < 0) {
            std::cout << "left\n" << steps;
            return 0;
        }

        if (current >= n) {
            std::cout << "right\n" << steps;
            return 0;
        }
    }

    return 0;
}
