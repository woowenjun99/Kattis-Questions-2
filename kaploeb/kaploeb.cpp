// ***Kapløb Solution***
// Difficulty: 3.1
// Time Limit: 2 seconds, Memory Limit: 1024 MB
// Acceptance: 44%
// CPU Time: 0.04 s
// Author: No author
// Source: No source
// Link: https://open.kattis.com/problems/kaploeb


#include <iostream>
#include <queue>
#include <string>
#include <unordered_map>
#include <vector>
using namespace std;

struct Stats {
    long laps;
    long timing;
};

struct QueueRank {
    long person;
    long timing;
};

struct Comparator {
    bool operator() (QueueRank a, QueueRank b) const {
        if (a.timing != b.timing) return a.timing > b.timing;
        return a.person > b.person;
    }
};

priority_queue<QueueRank, vector<QueueRank>, Comparator> pq;
unordered_map<int, Stats> mappers;

int main() {
    ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);
    int l, k ,s; cin >> l >> k >> s;

    for (int i = 0; i < l; ++i) {
        long person, time; string time_string; cin >> person >> time_string;
        time = stol(time_string.substr(0, 2)) * 60 + stol(time_string.substr(3, 2));
        if (mappers.find(person) != mappers.end()) {
            mappers.find(person)->second.laps++;
            mappers.find(person)->second.timing += time;
            continue;
        }
        mappers.insert(pair<long, Stats>(person, {1, time}));
    }

    for (auto [key, value]: mappers) {
        if (value.laps == k) {
            QueueRank qr = {key, value.timing};
            pq.push(qr);
        }
    }

    while (!pq.empty()) {
        cout << pq.top().person << "\n";
        pq.pop();
    }
}
