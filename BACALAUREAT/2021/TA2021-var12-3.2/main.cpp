#include <iostream>
using namespace std;

int main()
{
    int n,k,A[20][20],v[20];

    cin>>n>>k;

    for(int i=0; i<n; i++)
        for(int j=0; j<n; j++)
        cin>>A[i][j];

    /*for(int j=0; j<n-1-(k-1); j++)
    {
        v[j]=A[k-1][j];
    }
    int aux=v[n-(k-1)-2];
    for(int j=n-(k-1)-2; j>0; j--)
    {
        A[k-1][j]=v[j-1];
    }
    A[k-1][0]=aux;*/

    k--;
    int aux=A[k][n-2-k];
    for(int j=n-k-2; j>0; j--)
        A[k][j]=A[k][j-1];
    A[k][0]=aux;

    for(int i=0; i<n; i++)
    {for(int j=0; j<n; j++)
        cout<<A[i][j]<<" ";
        cout<<endl;
    }



    return 0;
}
