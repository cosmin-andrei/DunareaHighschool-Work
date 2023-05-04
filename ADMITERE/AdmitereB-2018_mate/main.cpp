#include <iostream>
#include <fstream>
using namespace std;

ifstream fin("admitere.txt");

int main()
{
    float n, t, c, d[25], v[25], sd=0;

    fin>>n>>t;
    for(int i=1; i<=n; i++)
    {
        fin>>d[i]>>v[i];
        sd=d[i]+sd;
    }

    float vm_real = sd/t, t_fals=0;

    for(int i=1; i<=n; i++)
        t_fals=t_fals+d[i]/v[i];

    float vm_fals = sd/t_fals;

    c=vm_fals-vm_real;
    cout<<c;

    return 0;
}
