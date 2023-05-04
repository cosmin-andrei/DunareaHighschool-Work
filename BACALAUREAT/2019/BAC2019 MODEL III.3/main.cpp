#include <iostream>
#include <fstream>
using namespace std;

ifstream fin("bac.txt");
int v[101];

int main()
{
    int nr;
    while(fin>>nr)
        v[nr]++;

    int l=0;
    int lmax=0;
    for(int i=0; i<=100; i++)
    {
        if(v[i]==0) l=0;
        else l=l+v[i];

        if(l>lmax) lmax=l;
    }

    cout<<lmax;

    return 0;
}
