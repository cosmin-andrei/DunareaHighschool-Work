#include <iostream>
#include <fstream>
using namespace std;

ifstream fin("bac.txt");

int main()
{
    int n, nr, minim=999, maxim=0;
    fin >> n;

    while(fin >> nr)
    {
        if(nr > maxim)
            maxim = nr;
        else if(nr < minim)
            minim = nr;
    }

    cout<<minim<<" "<<maxim;

    return 0;
}
