#include <iostream>

using namespace std;

int main()
{
    int n,a[100][100];
    cin>>n;

    for(int j=0; j<n; j++)
        a[n-1][j]=n;

    for(int i=0; i<n; i++)
        a[i][0]=i+1;

    for(int i=0; i<n-1; i++)
        for(int j=1; j<n; j++)
            a[i][j]=a[i][j-1]+a[i+1][j-1];

    for(int i=0; i<n; i++)
    {
        for(int j=0; j<n; j++)
            cout<<a[i][j]<<" ";
        cout<<endl;
    }

    return 0;


}
