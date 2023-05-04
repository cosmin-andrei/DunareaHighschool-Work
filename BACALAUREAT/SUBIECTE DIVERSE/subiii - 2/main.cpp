#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    int n,m,a[100][100],k;
    cin>>m>>n;
    k=m*n-1;
    for(int i=0; i<m; i++)
        for(int j=0; j<n; j++)
        {
            a[i][j]=4*k*k;
            k--;
        }
            for(int i=0; i<m; i++)
        {
        cout<<endl;
        for(int j=0; j<n; j++)
            cout<<a[i][j]<<" ";
}}
