#include <iostream>
#include <vector>
using namespace std;

int main()
{
    pair<string,int>p;
    p={"joy",64};
    pair<string,int>p2;
    p2={"joy",65};
    
    cout<<p.first<<" "<<p.second<<endl;
    cout<<p2.first<<" "<<p2.second<<endl;

    //but you can use vector to make it dynamic
    //! you have to create a pair everytime to use it
    vector<pair<string,int>>people;
    people.push_back({"ronaldo",10});
    people.push_back({"messi",7});
    people.push_back({"neymar",64});
    

    cout<<people[0].first<<endl;

    for(auto &p:people)
    {
        cout<<p.first<<" "<<p.second<<endl;
    }

}