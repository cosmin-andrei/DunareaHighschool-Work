#include <iostream>
#include <fstream>
using namespace std;

ifstream f("harta.txt");
int a[31][31],v[31],n,m;

void df(int nod)
{
    v[nod]=1;
    for(int i=1; i<=n; i++)
        if(a[nod][i] && v[i]==0) df(i);
}

int main()
{
    int x,y,nod,b,c;
    f>>n>>m>>b>>c;
    while(f>>x>>y)
        a[x][y]=a[y][x]=1;

    df(b);
    if(v[c]==1)cout<<"da"<<endl; //a)

    for(int i=1; i<=n; i++)
    {
        for(int j=1; j<=n; j++)
            v[j]=0;
        df(i);
        for(int j=i+1; j<=n; j++)
            if(v[j]==1)cout<<i<<" "<<j<<endl;

        }

    return 0;
}
