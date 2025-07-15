#include <iostream>
#include <vector>
using namespace std;

int main()
{
    //number of node and edges
    int N,E;
    cin>>N>>E;

    vector<vector<int>>adjList(N);
    while(E--)
    {
        int A,B;
        cin>>A>>B;
        adjList[A].push_back(B);
        adjList[B].push_back(A);
    }
    cout<<"adjacency list: "<<endl;
    for(int i=0;i<N;i++)
    {
        for(int neighbour:adjList[i])
        {
            cout<<neighbour<<" ";
        }
        cout<<endl;
    }
   
}