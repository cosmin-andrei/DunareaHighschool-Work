#include <iostream>
using namespace std;
int n, a[10][10], x1, x2, y1, y2;
int inside(int l, int c)
{
    return l>0 && l<=n && c>0 && c<=n;
}

void afisare()
{for(int i=1; i<=n; i++)
    {
        cout<<endl;
        for (int j=1; j<=n; j++)
            cout<<a[i][j]<<" ";
    }
    cout<<endl;
}

void Back(int l, int c, int k)
{
    if(inside(l,c) && a[l][c]==0)
    {k++; a[l][c]=k;
    if(l==x2 && c==y2)
        afisare();
    else
    {
        Back(l-2,c+1,k);
        Back(l-1,c-2,k);
        Back(l-1,c+2,k);
        Back(l-2,c-1,k);
        Back(l+1,c-2,k);
        Back(l+1,c+2,k);
        Back(l+2,c-1,k);
        Back(l+2,c+1,k);
    }
    a[l][c]=0;
    }
}


int main()
{
    cin>>n>>x1>>y1>>x2>>y2;
    Back(x1,y1,0);
    return 0;
}
