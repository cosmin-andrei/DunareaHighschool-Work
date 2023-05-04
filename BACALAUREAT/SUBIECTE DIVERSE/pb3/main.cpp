#include <iostream>
#include <fstream>
using namespace std;
ifstream f("date.in");
int a[100][100],v[100],n;
void df(int nod)
{
    v[nod]=1;
    for(int i=1; i<=n; i++)
        if(a[nod][i]==1 && v[i]==0)
            df(i);
}

int main()
{
    int x,y,nod;
    f>>n>>nod;
    while(f>>x>>y)
        a[x][y]=a[y][x]=1;

    df(nod);

    int ok=1;
    for(int i=1; i<=n; i++)
        if(v[i]==0)
        {
            cout<<"nu";
            ok=0;
            break;
        }
    if(ok==1)cout<<"da";

    f.close();
    return 0;
}
