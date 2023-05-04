#include <iostream>
#include <fstream>
using namespace std;
ifstream in("matrice.in");
int main()
{
    int v[50][50],n,m,i,j,ok=1;
    in>>m>>n;
    for(i=0; i<m; i++)
        for(j=0; j<n; j++)
            in>>v[i][j];
    for(i=0; i<m; i++)
        for(j=0; j<n/2; j++)
        {
            if(v[i][j]!=v[i][n-1-j])
            {
                ok=0;
                break;
            }
        }
    if(ok==0) cout<<"NU";
    else cout<<"DA";
    return 0;
}
