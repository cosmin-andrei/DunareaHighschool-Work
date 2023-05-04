#include <iostream>
using namespace std;

int main()
{
    int k,n,a[100][100];
    cin>>n>>k;

    for(int i=1; i<=n; i++)
    {
        a[i][i]=i*k;
        for(int j=i-1; j>=1; j--)
            a[i][j]=a[i][j+1]-1;
        for(int j=i+1; j<n+1; j++)
            a[i][j]=a[i][j-1]+1;
    }

    for(int i=1; i<=n; i++)
    {
        cout<<endl;
        for(int j=1; j<=n; j++)
            cout<<a[i][j]<<" ";
    }

    return 0;
}
