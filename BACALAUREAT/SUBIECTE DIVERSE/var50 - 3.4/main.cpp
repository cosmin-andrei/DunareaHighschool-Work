#include <iostream>
#include <fstream>
using namespace std;

ifstream f("bac.in");
ofstream g("bac.out");

int v[9999];

int main()
{   int n,l=0;

    f >> n;
    for(int k=1; k<=n; k++)
        {
            int r;
            f>>r;
            if(r==9999)l++;
            else v[r]++;

        }

    for(int k=0; k<9999; k++)
        if(v[k]>1) g<<k<<" ";
        if(l>1) g<<"9999";


    return 0;
}
