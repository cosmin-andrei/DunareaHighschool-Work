#include <iostream>
#include <fstream>
using namespace std;

ifstream f("date.in");
int a[100][100],v[100],c[100],n;

void bf(int nod)
{
    int prim, ultim;
    v[nod]=1;
    prim=ultim=1;
    c[prim]=nod;
    while(prim<=ultim)
    {
        int x=c[prim];
        for(int i=1; i<=n; i++)
            if(a[x][i] && v[i]==0)
            {
                ultim++;
                c[ultim]=i;
                v[i]=1;
            }
        prim++;
    }
    for(int i=1; i<=n; i++)
        cout<<c[i]<<" ";
}

int main()
{
    int x,y,nod;
    f>>n>>nod;
    while(f>>x>>y)
        a[x][y]=a[y][x]=1;

    bf(nod);
    return 0;
}
