#include <iostream>
#include <fstream>
using namespace std;

ifstream fin("bac.txt");

int poz[10], l[10];

int main()
{
    int nr, k=0, lmax=0;

    while (fin>>nr)\
    {
        k++;
        if (poz[nr]==0)
        {
            poz[nr]=k;
            l[nr]=1;
        }
        else l[nr]=k-poz[nr]+1;

    }

    for(nr=0; nr<10; nr++)
        if(l[nr]>lmax)
            lmax=l[nr];

    cout<<lmax<<endl;

    for(nr=0; nr<10; nr++)
        if (l[nr]==lmax)
            cout<<nr<<" ";

    return 0;
}
