#include <iostream>

using namespace std;
void sub(int n, int m, int a[], int b[])
{
    int j=min(n,m);
    for(int i=0; i<j; i++)
        cout<<a[i]<<" "<<b[i]<<" ";
    if(n>m)
        for(int i=j; i<n; i++)
            cout<<a[i]<<" ";
    else for(int i=j; i<m; i++)
            cout<<b[i]<<" ";
}
int main()
{
    int n,m,v[100],w[100];
    cin>>n;
    for(int i=0; i<n; i++)
        cin>>v[i];
    cin>>m;
    for(int i=0; i<m; i++)
        cin>>w[i];
    sub(n,m,v,w);
    return 0;
}
