#include <iostream>
#include <fstream>
using namespace std;

ifstream fin("bac.txt");

int main()
{
    int n, vf[101]= {0};

    while(fin>>n)
        vf[n]++;

    int l=0, lmax=0;

    for(int i=0; i<=100; i++)
    {
        if(vf[i]!=0) l=l+vf[i];
        else
        {
            if(l>lmax)
                lmax=l;
                l=0;
        }
    }

    cout<<lmax;

    return 0;
}
