#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int n;
    cin>>n;
    
    vector<pair<string,int>>people;
    for(int i=0;i<n;i++)
    {
        string name;
        int age;
        cin>>name>>age;
        people.push_back({name,age});

    }
    for(auto &a:people)
    {
        cout<<a.first<<" "<<a.second<<endl;
    }
}