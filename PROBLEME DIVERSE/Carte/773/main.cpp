#include <iostream>
#include <fstream>
using namespace std;
int a[10][10],n,m,maxi=0;
ifstream f("date.in");
int inside(int l, int c)
{
    return l>=1 && l<=n && c>=1 && c<=n;
}

void Back(int l, int c, int k)
{
    if(inside(l,c)==true && a[l][c]==1)
    {
        a[l][c]=0;
        k++;
        if(k>maxi)
            maxi=k;
        Back(l-1,c-1,k);
        Back(l-1,c,k);
        Back(l-1,c+1,k);
        Back(l,c-1,k);
        Back(l,c+1,k);
        Back(l+1,c-1,k);
        Back(l+1,c,k);
        Back(l+1,c+1,k);
    }
}
void afisare()
{
    for(int i=1; i<=n; i++)
    {
        cout<<endl;
        for (int j=1; j<=m; j++)
            cout<<a[i][j]<<" ";
    }
    cout<<endl;
}

int main()
{
    int nr=0;
    f>>n>>m;
    for(int i=1; i<=n; i++)
        for(int j=1; j<=m; j++)
            f>>a[i][j];
    for(int i=1; i<=n; i++)
        for(int j=1; j<=m; j++)
            if(a[i][j]==1)
            {   cout<<i<<" "<<j<<endl;
                 nr++;
                 afisare();
                 Back(i,j,0);
                 afisare();

            }
    cout<<nr<<endl<<maxi;

    return 0;
}
