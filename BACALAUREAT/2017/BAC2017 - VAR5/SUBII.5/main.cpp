#include <iostream>

using namespace std;

int main()
{
    int m,n,a[50][50];

    cin>>m>>n;
    for(int i=0; i<m; i++)
        for(int j=0; j<n; j++)
            cin>>a[i][j];

    int min1=a[0][0], p1, p2, min2=a[0][n-1];

    for(int i=1; i<m; i++)
        if(min1>a[i][0])
        {
            min1=a[i][0];
            p1=i;
        }

    for(int i=1; i<m; i++)
        if(min2>a[i][n-1])
        {
            min2=a[i][n-1];
            p2=i;
        }

    int aux=a[p1][0];
    a[p1][0]=a[p2][n-1];
    a[p2][n-1]=aux;

    for(int i=0; i<m; i++)
    {
        for(int j=0; j<n; j++)
            cout<<a[i][j]<<" ";
        cout<<endl;
    }

    return 0;
}
