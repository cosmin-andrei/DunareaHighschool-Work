#include <iostream>

using namespace std;

int main()
{
    int n,m,a[25][25];

    while(n<2 || n>24)
        cin>>n;

    while(m<2 || m>24)
        cin>>m;

    for(int i=0; i<n; i++)
        for(int j=0; j<m; j++)
            if(i==n || j==m) a[i][j]=1;

    for(int i=n-2; i>=0; i--)
        for(int j=m-2; j>=0; j--)
            a[i][j]=(a[i+1][j]+a[i][j+1])%10;

    for(int i=0; i<n; i++)
    {
        for(int j=0; j<m; j++)
            cout<<a[i][j]<<" ";
        cout<<endl;
    }

    return 0;
}
