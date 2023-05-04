#include <iostream>

using namespace std;

int main()
{
    int n,m,a[20][20];
    cin>>m>>n;
    for(int i=0; i<m; i++)
        for(int j=0; j<n; j++)
            cin>>a[i][j];

    for(int j=0; j<n-1; j++)
    {
        int ok=0;
        for(int i=1; i<m; i++)
            if(a[0][j]==a[i][n-1])ok=1;
        if(ok) cout<<a[0][j]<<" ";
    }


    return 0;
}
