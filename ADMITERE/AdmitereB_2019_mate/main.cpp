#include <iostream>
#include <fstream>
using namespace std;

ifstream fin("date.in");

int verif(int n, int v[])
{
    int k=0;
    for(int i=0; i<n; i++)
        if(v[i]==1)k++;

    if(k==0) return 0;
    return k;
}

int cmmdc(int a, int b)
{
    if(a>b)
    {
        int aux=a;
        a=b;
        b=aux;
    }

    int div;
    for(int d=1; d<=a; d++)
        if(a%d==0 && b%d==0)
            div=d;

    return div;

}

int pereche1(int n, int v[])
{
    for(int i=0; i<n-1; i++)
        if(cmmdc(v[i],v[i+1])==1) return 1;
    return 0;
}

int pereche2(int n, int v[])
{
    for(int i=0; i<n-1; i++)
    {
        int d=cmmdc(v[i],v[i+1]);
        if(cmmdc(d,v[i+2])==1) return 1;
    }
    return 0;
}

int main()
{
    int v[100], n;
    fin>>n;

    for(int i=0; i<n; i++)
        fin>>v[i];

    if(verif(n,v)!=0)cout<<n-verif(n,v);
    else if(pereche1(n,v)==1)cout<<n;
    else if(pereche2(n,v)==1)cout<<n+1;
    else
    {

        for(int i=0; i<n; i++)
        {
            int d=cmmdc(v[i],v[i+1]);
            for(int i=i+2; i<n; i++)
                d=cmmdc(d,v[i]);

        }
        if(d>1)cout<<"nu exista";
    }


    return 0;
}
