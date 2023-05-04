#include <iostream>
#include <fstream>
using namespace std;

ifstream f("bac.txt");

int a[100][100],v[100],n;

void df(int nod)
{
    cout<<nod<<" ";
    v[nod]=1;
    for(int i=1; i<=n; i++)
        if(a[nod][i]==1 && v[i]==0)
            df(i);
}

int main()
{
    int x,y,nod;
    f>>n;

    while(f>>x>>y)
        a[x][y]=a[y][x]=1;

    for(nod=1; nod<=n; nod++)
    {
        df(nod);
        cout<<endl;
        for(int i=1; i<=n; i++)
            v[i]=0;
    }

    f.close();
    return 0;
}
