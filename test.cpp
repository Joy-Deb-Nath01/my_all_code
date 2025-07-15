#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int n,e;
    cin>>n>>e;
    vector<vector<int>>adj(n);
    while(e--)
    {
        int u,v;
        cin>>u>>v;
        adj[u].push_back(v);
        adj[v].push_back(u);

    }
    cout<<endl;
    for(int i=0;i<n;i++)
    {
        for(int neighbour:adj[i])
        {
            cout<<neighbour<<" ";
        }
        cout<<endl;
    }
}