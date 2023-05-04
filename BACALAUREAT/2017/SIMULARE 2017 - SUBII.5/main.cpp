#include <iostream>

using namespace std;

int main()
{
    int n,a[20][20];
    cin>>n;

    for(int j=0; j<n; j++)
        a[0][j]=n;

    for(int i=0; i<n; i++)
        a[i][n-1]=n-i;

    for(int i=1; i<n; i++)
        for(int j=n-2; j>=0; j--)
            a[i][j]=a[i-1][j]+a[i][j+1];

    for(int i=0; i<n; i++)
    {
        for(int j=0; j<n; j++)
            cout<<a[i][j]<<" ";
        cout<<endl;
    }

    return 0;
}
