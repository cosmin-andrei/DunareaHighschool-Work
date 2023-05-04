#include <iostream>
#include <fstream>
using namespace std;
ifstream f("date.in");
ofstream g("date.out");
int A[100][100],d[100];

int main()
{
    int n,m,k;
    f>>n>>m>>k;

    int i,j;
    while(f>>i>>j)
        A[i][j]=A[j][i]=1;

    for(i=1; i<=n; i++)
        for(int j=1; j<=n; j++)
            d[i]=d[i]+A[i][j];

    g<<"a) ";
    for(i=1; i<=n; i++)
        g<<d[i]<<" ";
    g<<'\n';

    ///b

    int ok;
    do
    {
        ok=1;
        for(i=1; i<=n; i++)
            if(d[i]<k && d[i]>0)
            {
                for(j=1; j<=n; j++)
                    if(A[i][j]==1)
                    {
                        A[i][j]=A[j][i]=0;
                        d[j]--;
                    }
                ok=0;
                d[i]=0;
            }

    }while(ok==0);

    for(i=1; i<=n; i++)
        if(d[i]>0)g<<i<<" ";

    return 0;
}
