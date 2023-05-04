#include <iostream>

using namespace std;

int main()
{
    int n,p=1,a[50][50];
    cin>>n;

    for(int i=0; i<n; i++)
        for(int j=0; j<n; j++)
            cin>>a[i][j];
    for(int j=0; j<n; j++)
    {
        p=1;
        for(int i=0; i<n; i++)
            p=p*a[i][j];
        cout<<p<<" ";
    }

    return 0;
}
