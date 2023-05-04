#include <iostream>
#include <fstream>
using namespace std;
ifstream f("g1.txt");
ifstream g("g2.txt");
int n1,n2,a[30][30],b[30][30];
int main()
{
    int x,y;

    //g1
    f>>n1;
    while(f>>x>>y)
        a[x][y]=a[y][x]=1;

    //g2
    g>>n2;
    while(g>>x>>y)
        b[x][y]=b[y][x]=1;

    if(n1!=n2)cout<<"nu";
    else
    {
        int ok=1;
        for(int i=1; i<=n2; i++)
            for(int j=1; j<=n2; j++)
            if(b[i][j]==1 && a[i][j]==0)ok=0;
        if(ok==1)cout<<"da";
        else cout<<"nu";
    }

    return 0;
}
