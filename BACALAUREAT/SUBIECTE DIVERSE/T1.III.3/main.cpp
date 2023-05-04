#include <iostream>
#include <fstream>
using namespace std;

ifstream fin("bac.txt");

int main()
{
    int nr1, nr2, lung=1, lungm=0;
    fin>>nr1;

    while(fin>>nr2)
    {
        int pnr=nr2;
        while(pnr>9)
            pnr=pnr/10;

        if(pnr==x%10)
            lung++;
        else
        {
            if(lung>lungm)
                lungm=lung;
            lung=1;
        }
        nr1=nr2;
    }

    cout<<lungm;


    return 0;
}
