#include<iostream>
using namespace std;
int main()
{
    int a[50][50],n,m,sem;
    cin>>m>>n;

    for(int i=1; i<=m; i++)
        for(int j=1; j<=n; j++)
            cin>>a[i][j];

    for(int i=1; i<=m; i++)
        for(int j=1; j<=n; j++)
            if(a[j][n]==a[i][1]&&a[j][n]!=0)
            {
                sem=1;
                cout<<a[j][n]<<" ";
            }

    if(sem==0)
        cout<<"nu exista";
    return 0;

}
