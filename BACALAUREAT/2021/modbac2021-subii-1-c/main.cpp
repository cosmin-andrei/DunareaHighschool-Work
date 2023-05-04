#include <iostream>
using namespace std;
int main()
{
    int m,n,v[100][100],ultim=0;
    cin>>m>>n;
    for(int i=m-1; i>=0; i--)
        for(int j=n-1; j>=0; j--)
        {
            v[i][j]=ultim*ultim;
            ultim+=2;
        }
 for(int i=0; i<m; i++)
       {cout<<endl;
        for(int j=0; j<n; j++)
            cout<<v[i][j]<<" ";
        }
}
o
