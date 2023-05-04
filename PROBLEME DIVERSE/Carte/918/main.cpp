#include <iostream>
#include <fstream>
using namespace std;
ifstream f("g1.txt");
int n1,m1,n2,m2,a[30][30],b[30][30];
int main()
{
    int x,y;

    //g1
    f>>n1>>m1;
    while(f>>x>>y)
        a[x][y]=a[y][x]=1;

    m2=n1*(n1-1)/2-m1;
    n2=n1;

    for(int i=1; i<=n2; i++)
        for(int j=1; j<=n2; j++)
            b[i][j]=1-a[i][j];

    for(int i=1; i<=n2; i++)
    {
        for(int j=1; j<=n2; j++)
            cout<<b[i][j]<<" ";
        cout<<endl;
    }
    return 0;
}
