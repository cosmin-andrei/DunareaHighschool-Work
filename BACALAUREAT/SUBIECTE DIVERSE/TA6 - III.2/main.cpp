#include <iostream>

using namespace std;

int main()
{
    int n, a[20][20];
    cin>>n;

    for(int i=0; i<n; i++)
        for(int j=n-1; j>=0; j--)
            a[i][j]=0;

    for(int j=0; j<n-1; j++)
        a[0][j]=n-j-1;

    for(int j=1; j<n; j++)
        a[n-1][j]=j;

    for(int i=1; i<n-1; i++)
        for(int j=0; j<n; j++)
            if(i+j<n)
                a[i][j]=a[i-1][j]-1;
            else if(i+j>n)
                a[i][j]=a[i-1][j]+1;


    for(int i=0; i<n; i++)
    {
        for(int j=0; j<n; j++)

            cout<<a[i][j]<<" ";
        cout<<endl;
    }

    return 0;
}
