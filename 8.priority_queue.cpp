#include <iostream>
#include <queue>
using namespace std;
int main()
{
    priority_queue<int>pq;
    pq.push(50);
    pq.push(30);
    pq.push(40);
    
    while(!pq.empty())
    {
        cout<<pq.top()<<" ";
        pq.pop();
    }
    cout<<endl;
    priority_queue<int,vector<int>,greater<int>>pqmin;//minHeap
    pqmin.push(10);
    pqmin.push(70);
    pqmin.push(40);

    while(!pqmin.empty())
    {
        cout<<pqmin.top()<<" ";
        pqmin.pop();
    }
}   