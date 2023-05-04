#include <iostream>

using namespace std;

int main()
{
    int N, A[100][100];
    cin>>N;
    for(int i=0; i<N; i++)
        for(int j=0; j<N; j++)
            cin>>A[i][j];

    for(int i=N/2; i<N; i++)
        for(int j=0; j<N; j++)
            A[i][j]=A[i+1][j];


    for(int i=0; i<N; i++)
        for(int j=N/2; j<N; j++)
            A[i][j]=A[i][j+1];

    N=N-1;

    for(int i=0; i<N; i++)
    {
        for(int j=0; j<N; j++)
            cout<<A[i][j]<<" ";
        cout<<endl;
    }

    return 0;
}
