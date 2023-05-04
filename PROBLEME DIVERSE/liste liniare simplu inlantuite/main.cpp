#include <iostream>
using namespace std;

struct nod
{
    int info;
    nod *adr;
}*p,*u;
void adaugare(nod*&p, nod*&u, int val)
{
    nod*q;
    q=new nod;
    q->info=val;
    q->adr=NULL;
    if(p==NULL)
    {
        p=q;
        u=q;
    }
    else
    {
        u->adr=q;
        u=q;
    }
}
void listare(nod*p)
{
    nod*q=p;
    while(q!=NULL)
    {
        cout<<q->info<<" ";
        q=q->adr;
    }
    cout<<endl;
}
int main()
{
    int i,n,x;
    cin>>n;
    for(i=0; i<n; i++)
    {
        cin>>x;
        adaugare(p,u,x);
    }
    listare(p);
    return 0;
}
