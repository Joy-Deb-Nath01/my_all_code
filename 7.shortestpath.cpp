#include <iostream>
#include <vector>
#include <queue>
#include <algorithm>
using namespace std;

void bfs(int src, vector<vector<int>>& adj, vector<bool>& visited, vector<int>& level, vector<int>& parent) {
    queue<int> q;
    q.push(src);
    visited[src] = true;
    level[src] = 0;
    parent[src] = -1;

    while (!q.empty()) {
        int current = q.front();
        q.pop();

        for (int child : adj[current]) {
            if (!visited[child]) {
                visited[child] = true;
                q.push(child);
                level[child] = level[current] + 1;
                parent[child] = current;
            }
        }
    }
}

int main() {
    int n, e;
    cout << "Enter number of nodes and edges: ";
    cin >> n >> e;

    vector<vector<int>> adj(1e5);
    while (e--) {
        int u, v;
        cin >> u >> v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }

    cout << "Enter source node: ";
    int src;
    cin >> src;

    vector<bool> visited(1e5, false);
    vector<int> level(1e5, -1);
    vector<int> parent(1e5, -1);

    bfs(src, adj, visited, level, parent);

    cout << "Enter destination node: ";
    int dest;
    cin >> dest;

    if (!visited[dest]) {
        cout << "No path from " << src << " to " << dest << endl;
    } else {
        vector<int> path;
        while (dest != -1) {
            path.push_back(dest);
            dest = parent[dest];
        }
        reverse(path.begin(), path.end());

        cout << "Shortest path: ";
        for (int node : path) {
            cout << node << " ";
        }
        cout << endl;

        // 🆕 Added line to show shortest path length:
        cout << "Length of shortest path: " << level[path.back()] << endl;
    }

    return 0;
}
