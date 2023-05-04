#include <iostream>
#include <fstream>
using namespace std;
ifstream f("date.in");

int a[100][100],v[100],mat[100][100],n;

void df(int nod, int k)
{
    v[k]=1;
    if(k!=nod) mat[nod][k]=1;
    for(int i=1; i<=n; i++)
        if(a[k][i] && v[i]==0) df(nod,i);
}

int main()
{
    int x,y,m;
    f>>n>>m;

    for(int i=1; i<=m; i++)
    {
        f>>x>>y;
        a[x][y]=a[y][x]=1;

    }

    for(int i=1; i<=n; i++)
    {
        for(int j=1; j<=n; j++)
            v[j]=0;
        df(i,i);
    }

    for(int i=1; i<=n; i++)
    {
        for(int j=1; j<=n; j++)
            cout<<mat[i][j]<<" ";
        cout<<endl;
    }


    return 0;
}
