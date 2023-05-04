#include <iostream>

using namespace std;

int main()
{
    int n, a[100][100];

    cin>>n;

    for(int i=0; i<n; i++)
        for(int j=0; j<n; j++)
            cin>>a[i][j];

    int s=0;

    for(int i=0; i<n; i++)
        for(int j=n/2; j<n; j++)
            if(j>i && i+j>n+1 && j!=n-1)
                s=s+a[i][j];


    cout<<s;

    return 0;
}
