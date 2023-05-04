#include <iostream>
using namespace std;

int main()
{
    int n, A[20][20];
    cin>>n;

    for(int i=0; i<n; i++)
        for(int j=0; j<n; j++)
        {
            if(i+j==n-1)A[i][j]=n;
            if(i+j<n-1)A[i][j]=j+1+i;
            if(i+j>n-1) A[i][j]=A[n-j-1][n-i-1];

        }

    for(int i=0; i<n; i++)
    {
        cout<<endl;
        for(int j=0; j<n; j++)
            cout<<A[i][j]<<" ";
    }
    return 0;
}
