#include <iostream>
#include <fstream>
using namespace std;

ifstream f("date.in");
int a[100][100],v[100],n,nrc;

void df(int nod)
{
    v[nod]=nrc;
    for(int i=1; i<=n; i++)
        if(a[nod][i]==1 && v[i]==0) df(i);
}

int main()
{
    f>>n;

    int x,y;
    while(f>>x>>y)
        a[x][y]=a[y][x]=1;

    for(int i=1; i<=n; i++)
        if(v[i]==0)
        {
            nrc++;
            df(i);
        }

        if(nrc==1)cout<<"graf conex";
        else cout<<"graful nu este conex";


    cout<<endl<<nrc<<" componente conexe"<<endl;

    for(int i=1; i<=nrc; i++)
    {
        for(int j=1; j<=n; j++)
            if(v[j]==i)cout<<j<<" ";
        cout<<endl;
    }

    return 0;
}
