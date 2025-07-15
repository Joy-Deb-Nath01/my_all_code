#include <iostream>
#include <vector>
#include <queue>
using namespace std;
void bfs(int src,vector<vector<int>>&adj,vector<bool>&visited)
{
    queue<int>q;
    q.push(src);
    visited[src]=true;
    
    while(!q.empty())
    {
        int parent=q.front();
        cout<<q.front()<<" ";
        q.pop();
        for(int child:adj[parent])
        {
            if(!visited[child])
            {
                visited[child]=true;
                q.push(child);
            }
        }
        
    }
}
int main()
{
    cout<<"enter number of nodes and edges:";
    int n,e;
    cin>>n>>e;
    vector<vector<int>>adj(1e5);
    while(e--)
    {
        int u,v;
        cin>>u>>v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    cout<<"enter source:";
    int src;
    cin>>src;
    vector<bool>visited(1e5,false);
    bfs(src,adj,visited);
}