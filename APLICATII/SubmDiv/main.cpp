#include <iostream>
using namespace std;
int stiva[16];
int x,m,n,p,k,ev,as,a[1001];
stiva st;
void init ()
{
    st[k]=0;
}
int succesor()
{
    if (st[k]<n)
    {
        {
            st[k]=st[k]+1;
            return 1;
        }
    }
    else return 0;
}
int valid ()
{
    if ((k>1) && (st[k]<=st[k-1])) return 0;
    return 1;
}
int solutie ()
{
    return k==m;
}
void tipar()
{
    for(int i=1; i<=m; i++)
        cout<<a[st[i]]<<" ";
    cout<<"\n";
}
void bt ()
{
    k=1;
    init ();
    while(k>0)
    {
        as=1;
        ev=0;
        while(as && !ev)
        {
            as=succesor();
            if(as) ev=valid();
        }
        if(as)
            if(solutie()) tipar();
            else
            {
                k++;
                init();
            }
        else k--;
    }
}
int main ()
{
    cin>>x>>m;
    int i=0;
    for( int k=1; k<=x; k++)
    {
        if(x%k==0)
        {
            i++;
            a[i]=k;
        }
    }
    n=i;
    if(n<m) cout<<"fara solutie";
    else
        bt();
    return 0;
}
