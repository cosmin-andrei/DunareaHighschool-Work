#include <iostream>
#include <stdlib.h>
using namespace std;
int stiva[16];
int n, k, ev, as;
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
    for(int i=1; i<k; i++)
        if((st[k]==st[i]) || (abs(k-i)==abs(st[k]-st[i]))) return 0;
    return 1;
}
int solutie ()
{
    return k==n;
}
void tipar()
{
    for(int i=1; i<=n; i++)
    {
        for(int j=1; j<=n; j++)
        {
            if (st[i]==j) cout<<"* ";
            else
                cout<<"- ";
        }
        cout<<"\n";
    }
    k=-1;
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
    cin>>n;
    bt();
    return 0;
}
