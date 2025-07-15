#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    // Function to find sum of weights of edges of the Minimum Spanning Tree
    int spanningTree(int V, vector<vector<int>> adj[])
    {
        // Min-heap -> {weight, node}
        priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> pq;

        vector<int> vis(V, 0); // To keep track of visited nodes
        pq.push({0, 0}); // Start from node 0 with weight 0

        int sum = 0;

        while (!pq.empty())
        {
            auto it = pq.top();
            pq.pop();
            int node = it.second;
            int wt = it.first;

            if (vis[node] == 1)
                continue;

            vis[node] = 1;
            sum += wt;

            for (auto it : adj[node])
            {
                int adjNode = it[0];
                int edW = it[1];
                if (!vis[adjNode])
                {
                    pq.push({edW, adjNode});
                }
            }
        }

        return sum;
    }
};

// ✅ MAIN FUNCTION
int main()
{
    int V, E;
    cout << "Enter number of vertices and edges: ";
    cin >> V >> E;

    // Graph: adjacency list of V nodes
    vector<vector<int>> adj[V];

    cout << "Enter each edge in format: node1 node2 weight\n";
    for (int i = 0; i < E; ++i)
    {
        int u, v, w;
        cin >> u >> v >> w;

        // Since the graph is undirected, add both directions
        adj[u].push_back({v, w});
        adj[v].push_back({u, w});
    }

    Solution obj;
    int mstWeight = obj.spanningTree(V, adj);

    cout << "Total weight of MST: " << mstWeight << endl;

    return 0;
}
