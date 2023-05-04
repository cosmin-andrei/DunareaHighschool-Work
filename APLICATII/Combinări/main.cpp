#include <iostream>
using namespace std;
int stiva[16];
int n, p, k, ev, as;
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
    return k==p;
}
void tipar()
{
    for(int i=1; i<=p; i++)
        cout<<st[i]<<" ";
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
    cin>>n>>p;
    bt();
    return 0;
}

