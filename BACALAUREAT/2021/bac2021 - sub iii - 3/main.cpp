#include <iostream>
#include <fstream>
using namespace std;
ifstream f("cheltuieli.in");
int c[101];
int main()
{
    int x,y,z;
    while(f>>x>>y>>z)
    {
        c[x]= c[x] + y*z;
    }

    int valoareMax=0;
    for(int i=1; i<=100; i++)
        if(c[i]>valoareMax)
            valoareMax = c[i];

    int nrMax=0;
    for(int i=1; i<=100; i++)
        if(c[i] == valoareMax)
            nrMax++;

    cout<<valoareMax<<" "<<nrMax;
    return 0;
}
