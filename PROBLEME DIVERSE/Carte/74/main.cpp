#include <iostream>
using namespace std;

int x[10],s;

void Afis(int k)
{
    for( int j=1; j<=k; j++)
        cout<<x[j]<<" ";
    cout<<endl;
}

bool prim(int n)
{
    int d;
    for(d=2; d<=n/2; d++)
        if(n%d==0) return false;
    return true;
}

bool OK(int n, int k)
{
    if(prim(x[k])==false)return false;
    if(k>1 && x[k]<x[k-1])
        return false;
    s=0;
    for(int i=1; i<=k; i++)
        s+=x[i];

    if(s>n)
        return false;
    return true;
}

bool Solutie(int n, int k)
{
    s=0;
    for(int i=1; i<=k; i++)
        s+=x[i];

    if(s==n)
        return true;
    else
        return false;
}

void Back(int n, int k)
{
    for(int i=2; i<=n; i++)
    {
        x[k]=i;
        if(OK(n,k))
        {
            if(Solutie(n,k))
                Afis(k);
            else
                Back(n,k+1);
        }

    }
}
int main()
{
    int n;
    cin>>n;
    Back(n,1);
    return 0;
}
