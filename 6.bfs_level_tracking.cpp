#include <iostream>
#include <vector>
#include <queue>
using namespace std;
void bfs(int src,vector<vector<int>>&adj,vector<bool>&visited,vector<int>&level)
{
    queue<int>q;
    q.push(src);
    visited[src]=true;
    level[src]=0;
    while(!q.empty())
    {
        int parent=q.front();
        cout<<parent<<" level:"<<level[parent]<<endl;
        q.pop();
        for(int child:adj[parent])
        {
            if(!visited[child])
            {
                q.push(child);
                visited[child]=true;
                level[child]=level[parent]+1;
                
            }
        }
    }

}
int main()
{
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
    cout<<"enter a source:";
    int src;
    cin>>src;
    vector<bool>visited(1e5,false);
    vector<int>level(1e5,-1);
    bfs(src,adj,visited,level);
}