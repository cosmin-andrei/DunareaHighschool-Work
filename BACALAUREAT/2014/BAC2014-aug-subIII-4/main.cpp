#include <iostream>
#include <fstream>
#include <math.h>

using namespace std;
ifstream f("bac.txt");

int p,v[10],n,nr,i,k;

int main()
{
    f>>n;
    while(f>>nr)
    {
        k++;
        p=0;
        while(nr>1)
        {
            p++;
            nr=nr/10;
        }
        v[p]++;
    }

    if(k<n)cout<<"NU EXISTA";
    else
        {k=0;
        for(i=0; i<n; i++)
            {if(v[i]!=0)k=k+v[i];
             if(k>=n)
            {
                cout<<pow(10,i);
                break;
            }}}

    return 0;
}
