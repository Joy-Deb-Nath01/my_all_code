#include <iostream>
#include <vector>
using namespace std;

int main() {
    int V, E;
    cin >> V >> E; // Number of nodes and edges

    vector<pair<int, int>> edges; // Edge list using pair

    for (int i = 0; i < E; i++) {
        int u, v;
        cin >> u >> v;
        edges.push_back({u, v}); // Store the edge
    }
    cout<<edges[1].second;
}