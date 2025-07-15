#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int n,e;
    cin>>n>>e;
    int mat[n][n];
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            mat[i][j]=0;
        }
    }
    cout<<endl;
     for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
           cout<< mat[i][j]<<" ";
        }cout<<endl;
    }

    
    while(e--)
    {
        int u,v;
        cin>>u>>v;
        mat[u][v]=1;
        mat[v][u]=1;
    }

      cout<<endl;
     for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
           cout<< mat[i][j]<<" ";
        }cout<<endl;
    }
}