#include <iostream>
using namespace std;
int main()
{
    int n,v[15][15]={0};
    cin>>n;

    for(int i=0; i<n; i++)
        v[i][0]=1;

    for(int j=0; j<n; j++)
        v[n-1][j]=j+1;

 for(int i=n-2; i>=0; i--)
        for(int j=1; j<n; j++)
            v[i][j]=v[i+1][j]+v[i][j-1];

    for(int i=0; i<n; i++)
    {
        for(int j=0; j<n; j++)
            cout<<v[i][j]<<" ";
        cout<<endl;
    }

    return 0;

}
