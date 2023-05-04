#include <iostream>
#include <fstream>
using namespace std;

ifstream fin("date.in");
int s[50][50], a[50][50],n;
int drum(int i, int j)
{
    if(i>0)
    {
        if(s[i][j]==s[i-1][j-1]+a[i][j])
            drum(i-1,j-1);
        else drum(i-1,j);
    }
    cout<<a[i][j]<<"+";
}
int main()
{
    int i,j;
    fin>>n;
    for(i=0; i<n; i++)
        for(j=0; j<n; j++)
            fin>>a[i][j];

  for(j=0; j<n; j++)
    s[0][j] = a[0][j];

    for(i=1; i<n ; i++)
        for(j=0; j<n; j++)
            if(j==0) s[i][j] = a[i][j] + s[i-1][j];
            else s[i][j] = a[i][j] + max(s[i-1][j], s[i-1][j-1]);

    int m=a[n-1][0],p=0;

    for(j=0; j<n; j++)
        if(m<s[n-1][j])
        {
            m=s[n-1][j];
            p=j;
        }

    drum(n-1,p);
    cout<<"="<<m;
    return 0;
}
