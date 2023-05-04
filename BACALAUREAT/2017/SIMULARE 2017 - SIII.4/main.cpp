#include <iostream>
#include <fstream>
using namespace std;

ifstream fin("bac.in");

int main()
{
    int m, n, nr, vf[1000]={0}, maxim=-1;

    fin>>m>>n;

    while(fin>>nr)
    {
        if(nr%2==0)
        {
            vf[nr]++;
            if(maxim<nr)
                maxim=nr;
        }
    }


    for(int i=maxim; i>=0; i=i-2)
        if(vf[i]!=0)
        cout<<i<<" ";

    return 0;
}
