#include <iostream>
using namespace std;

int main()
{
    int N,E;
    cin>>N>>E;
    int mat[N][N];
    //initializing all value to 0
    for(int i=0;i<N;i++)
    {
        for(int j=0;j<N;j++)
        {
            mat[i][j]=0;
        }
    }

    for(int i=0;i<N;i++)
    {
        for(int j=0;j<N;j++)
        {
            cout<<mat[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<endl;


    while(E--)
    {
        int A,B,W;
        cin>>A>>B>>W;
        mat[A][B]=W;
        mat[B][A]=W;
    }
//after initializing the value
       for(int i=0;i<N;i++)
    {
        for(int j=0;j<N;j++)
        {
            cout<<mat[i][j]<<" ";
        }
        cout<<endl;
    }
}
