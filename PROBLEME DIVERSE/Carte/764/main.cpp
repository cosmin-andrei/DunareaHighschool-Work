#include <iostream>
using namespace std;
int a[10][10],n;
int inside(int l, int c)
{
    return l>=1 && l<=n && c>=1 && c<=n;
}

void afisare()
{
    for(int i=1; i<=n; i++)
    {
        cout<<endl;
        for (int j=1; j<=n; j++)
            cout<<a[i][j]<<" ";
    }
    cout<<endl;
}

void Back(int l, int c, int k)
{//afisare();
    if(inside(l,c)==true && a[l][c]==0)
    {   k++;
        a[l][c]=k;
        if(k==n*n)
            afisare();
        else
        {
            Back(l-2,c-1,k);
            Back(l-1,c-2,k);
            Back(l-2,c+1,k);
            Back(l-1,c+2,k);
            Back(l+1,c-2,k);
            Back(l+2,c-1,k);
            Back(l+2,c+1,k);
            Back(l+1,c+2,k);
        }
    a[l][c]=0;
    }
}

    int main()
    {
        cin>>n;
        Back(1,1,0);
        return 0;
    }
