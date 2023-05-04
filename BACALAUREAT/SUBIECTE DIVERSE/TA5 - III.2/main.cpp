#include <iostream>

using namespace std;

int main()
{
    int m,n,a[100][100];

    cin>>m>>n;

    for(int i=1; i<=m; i++)
        for(int j=1; j<=n; j++)
            a[i][j]=(i*j)%10;

    for(int i=1; i<=m; i++)
    {
        for(int j=1; j<=n; j++)
            cout<<a[i][j]<<" ";
        cout<<endl;
    }

    return 0;
}
