#include <iostream>
#include <fstream>
using namespace std;
ifstream f("date.in");
int n,s[20],minI,maxJ;

void citire()
{
    f>>n;
    for(int i=0; i<n; i++)
        f>>s[i];
}

void solutie()
{
    int k,Lmax=0,i,j;
    for(i=0; i<n; i++)
    {
        k=0;
        int suma=0;
        for(j=i; j<n; j++)
        {
            suma += s[j];
            k++;
            if(suma%3==0)
                if(Lmax<k)
                {
                    Lmax=k;
                    minI=i;
                    maxJ=j;
                }
        }

    }
}

void afisare()

{
    for(int i=minI; i<=maxJ; i++)
        cout<<s[i]<<" ";
}

int main()
{
    citire();
    solutie();
    afisare();
    return 0;
}
