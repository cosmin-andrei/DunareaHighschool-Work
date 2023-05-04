#include <iostream>
#include <fstream>
using namespace std;
ifstream f("bomboane.in");
int v[100],n;
int maxim,minim,pmax,pmin;
void verificare(int &maxim, int &minim,int &pmax,int &pmin)
{
    minim=v[1];
    pmin=1;
    maxim=v[1];
    pmax=1;
    for(int i=2; i<=n; i++)
    {
        if(maxim<v[i])
        {
            maxim=v[i];
            pmax=i;
        }
        if(minim>v[i])
        {
            minim=v[i];
            pmin=i;
        }
    }
}
int main()
{
    int S=0;
    f>>n;
    for(int i=1; i<=n; i++)
    {
        f>>v[i];
        S=S+v[i];
    }

    int m=S/n;
    int k=0, ok=1;
    while(ok==1)
    {
        verificare(maxim, minim, pmax, pmin);
        if(maxim==minim) ok=0;
        else
        {
            int x = m - v[pmin];
            v[pmax] = v[pmax] - x;
            v[pmin] += x;
            k++;
            cout<<pmax<<" "<<pmin<<" "<<x<<endl;
        }
    }
    cout<<k;

    return 0;
}
