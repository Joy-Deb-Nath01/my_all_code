#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int n,e;
    cin>>n>>e;
    vector<vector<pair<int,int>>>adjlist(n);
    while(e--)
    {
        int u,v,w;
        cin>>u>>v>>w;
        adjlist[u].push_back({v,w});
        adjlist[v].push_back({u,w});
    }
    
    for(int i=0;i<n;i++)
    {
        cout<<"Node"<<i<<" :";
        for(auto neighbour:adjlist[i])
        {
            cout<<"("<<neighbour.first<<" "<<neighbour.second<<") ";
        }  
        cout<<endl;      
    }
}