#include<iostream>

using namespace std;

int x[100],pus[100],n,p,nr=0, suma=0;

void Suma(int p)
{
    int a=0;
    for(int i=1; i<=p; i++)
        a=a*10+x[i];
    suma = suma + a;
    nr++;
}

void ok(int k, int p)
{
    for(int i=1; i<=9; i+=2)
        if(!pus[i])
        {
            x[k]=i;
            pus[i]=1;
            if(k==p) Suma(p);
            else ok(k+1,p);
            pus[i]=0;
        }
}

int main()
{
    n=5;
    for(p=1; p<=5; p++)
        ok(1,p);
    cout<<suma;
    return 0;
}
