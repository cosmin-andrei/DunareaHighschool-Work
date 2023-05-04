#include <iostream>

using namespace std;

int main()
{
    int n,m,a[100][100];
    cin>>n>>m;

    int nr=1;

    for(int i=n; i>=1; i--)
        for(int j=m; j>=1; j--)
        {
            a[i][j]=nr*nr;
            nr=nr+2;
        }

    for(int i=1; i<=n; i++)
    {
        for(int j=1; j<=m; j++)
            cout<<a[i][j]<<" ";
        cout<<endl;
    }

    return 0;
}
