#include <iostream>
using namespace std;
int prim(int x)
{
    int ok=1;
    for(int d=2; d<=x/2; d++)
        if(x%d==0)ok=0;
    return ok;
}

int factori(long int n, long int m)
{
    int nr,k=0;
    if(n>m)nr=m;
    else nr=n;
    for(int d=2; d<=nr/2; d++)
        if(n%d==0 && m%d==0)
            if(prim(d)==1) k++;
    return k;
}

int main()
{
    int n,m;
    cin>>n>>m;
    cout<<factori(n,m);
    return 0;
}
