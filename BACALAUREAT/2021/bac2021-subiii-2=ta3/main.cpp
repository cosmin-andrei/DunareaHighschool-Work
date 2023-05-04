#include <iostream>
using namespace std;

int main()
{
    int m,n,a[10][10];
    cin>>m>>n;
    for(int i=1; i<=m; i++)
        for(int j=1; j<=n; j++)
        cin>>a[i][j];

    for(int i=1; i<=m; i++)
    for(int l=1; l<=m; l++)
        if(a[i][1]==a[l][n] && a[i][1]!=0)
        {cout<<a[i][1]<<" ";
        for(int k=1;k<=m;k++)
            if(a[k][n]==a[i][n])
            a[k][n]=0;
        }

    return 0;
}
