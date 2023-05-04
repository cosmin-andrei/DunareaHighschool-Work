#include <iostream>
using namespace std;
int x[100],p,n,a,b,b2[20];

int baza10()
{
    int nr=0, putere=1;
    for(int i=16; i>=1; i--)
    {
        nr=nr+x[i]*putere;
        putere=putere*2;
    }
    return nr;
}

void baza2()
{
    p=0;

    for(int i=1; i<20; i++)
        b2[i]=0;

    while(n)
    {
        b2[++p]=n%2;
        n=n/2;
    }

    for(int i=1; i<=16/2; i++)
        swap(b2[i],b2[16-i+1]);
}

int ok(int k)
{
   if(b2[k]==1 && x[k]==0) return 0;
    return 1;
}

int verificare(int k)
{
    return 16==k;
}

void afisare()
{
    cout<<baza10();
    cout<<endl;
}

void Back(int k)
{
    for(int i=0; i<=1; i++)
    {
        x[k]=i;
        if(ok(k))
        {
            if(verificare(k))
                afisare();
            else Back(k+1);
        }
    }

}

int main()
{
    cin>>n;
    baza2();
    Back(1);
    return 0;
}
