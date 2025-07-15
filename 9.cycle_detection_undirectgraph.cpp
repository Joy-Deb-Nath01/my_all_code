#include <iostream>
#include <vector>
#include <queue>
using namespace std;

// Function to check cycle from a given node using BFS
bool isCyclicBFS(int start, vector<int> adj[], vector<bool> &visited) {
    queue<pair<int, int>> q; // (node, parent)
    visited[start] = true;
    q.push({start, -1}); // Start node has no parent

    while (!q.empty()) {
        int node = q.front().first;
        int parent = q.front().second;
        q.pop();

        for (int neighbor : adj[node]) {
            if (!visited[neighbor]) {
                visited[neighbor] = true;
                q.push({neighbor, node});
            }
            else if (neighbor != parent) {
                // Cycle detected
                return true;
            }
        }
    }

    return false; // No cycle found from this node
}

// Check for cycle in all components
bool hasCycle(int V, vector<int> adj[]) {
    vector<bool> visited(V, false);

    for (int i = 0; i < V; i++) {
        if (!visited[i]) {
            cout << "Checking component starting at node " << i << "...\n"; // DEBUG
            if (isCyclicBFS(i, adj, visited)) {
                cout << "Cycle found starting at node " << i << "\n"; // DEBUG
                return true;
            }
        }
    }

    return false;
}

int main() {
    int V, E;
    cout << "Enter number of vertices: ";
    cin >> V;

    cout << "Enter number of edges: ";
    cin >> E;

    vector<int> adj[V];

    cout << "Enter " << E << " edges (u v):" << endl;
    for (int i = 0; i < E; i++) {
        int u, v;
        cout << "Edge " << i + 1 << ": ";
        cin >> u >> v;

        // Basic input validation
        if (u < 0 || u >= V || v < 0 || v >= V) {
            cout << "Invalid edge! Nodes must be between 0 and " << V - 1 << ". Try again.\n";
            i--; // Repeat this iteration
            continue;
        }

        adj[u].push_back(v);
        adj[v].push_back(u);
    }

    cout << "Input complete. Checking for cycles...\n";

    if (hasCycle(V, adj))
        cout << "🔁 Cycle Detected!" << endl;
    else
        cout << "✅ No Cycle Detected!" << endl;

    cout << "Program finished.\n";

    return 0;
}
