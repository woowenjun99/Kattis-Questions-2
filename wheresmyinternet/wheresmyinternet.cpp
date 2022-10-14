// ***Where's My Internet?? Solution***
// Difficulty: 3.9
// Time Limit: 1 second, Memory Limit: 1024 MB
// Acceptance: 29%
// CPU Time: 0.24 s
// Author: Bjarki Ágúst Guðmundsson
// Source: Icelandic High School Competition 2014
// Link: https://open.kattis.com/problems/wheresmyinternet


#include <iostream>
#include <map>
#include <unordered_map>
#include <vector>
using namespace std;

class Graph {
    public:
        map<int, vector<int>> AL;
        unordered_map<int, bool> visited;

        // Creating an undirected graph
        void addEdge(int v, int w) {
            AL[v].push_back(w);
            AL[w].push_back(v);
        }

        void dfs(int v) {
            visited[v] = true;
            // cout << "VISITING NOW: " << v << " \n";
            vector<int> arr = AL[v];
            for (auto it = arr.begin(); it != arr.end(); it++) {
                if (!visited[*it]) dfs(*it);
            }
        }
};

int main() {
    ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);
    Graph g;
    int N, M; cin >> N >> M;
    for (int i = 0; i < M; i++) {
        int a, b; cin >> a >> b;
        g.addEdge(a, b);
    }

    // If no house is connected to 1, we can just print all of the houses
    if (g.AL.find(1) == g.AL.end()) {
        for (int i = 2; i <= N; ++i) {
            if (g.visited.find(i) == g.visited.end()) cout << i << "\n";
        }
        return 0;
    }

    // Otherwise, perform a DFS with the starting node as 1
    g.dfs(1);

    // If not all the houses are connected, we iterate through the AL and determine which is not connected
    if (g.visited.size() != N) {
        for (int i = 2; i <= N; ++i) {
            if (g.visited.find(i) == g.visited.end()) cout << i << "\n";
        }
    } else cout << "Connected";
    return 0;
}
