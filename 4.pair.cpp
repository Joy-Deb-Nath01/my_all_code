#include <iostream>
using namespace std;
class Pair{
    public:
    string first;
    int second;

    void make_pair(string A,int B)
    {
        first=A;
        second=B;
    }
};
int main()
{
    Pair p;
    p.make_pair("joy",64);
    cout<<p.first<<" "<<p.second;

}