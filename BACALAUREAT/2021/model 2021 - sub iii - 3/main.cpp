#include <iostream>
#include <fstream>
using namespace std;
ifstream f("cheltuieli.in");
int main()
{
    int c[101],x,y,z;
    while(f>>x>>y>>z)
    {
        c[x] = c[x] + y*z;
    }
    int valMax = 0;
    for(int i=1; i<=100; i++)
        if(c[i]>valMax)
            valMax = c[i];
    int nrMax = 0;
    for(int i=1; i<=100; i++)
        if(c[i] == valMax)
            nrMax++;
    cout<<valMax<<" "<<nrMax;
    return 0;
}
