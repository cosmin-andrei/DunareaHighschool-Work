#include <iostream>
#include <fstream>
using namespace std;
ifstream f("bac.txt");
int a[100][100],v[100],n,y;
void df(int nod)
{
    v[nod]=1;
    for(int i=1; i<=n; i++)
        if(a[nod][i]==1 && v[i]==0)
            df(i);
}
int main()
{
    int l,m,nod,x;
    f>>n>>x>>y;
    while(f>>l>>m)
        a[l][m]=a[m][l]=1;
    df(x);
    if(v[y]==1) cout<<"DA";
    else cout<<"NU";
    f.close();
    return 0;
}
