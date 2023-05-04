#include <iostream>
#include <fstream>
using namespace std;

ifstream fin("bac.txt");

int main()
{
    int n, nr,k=0, maxim=0;
    fin>>n;

    while(fin>>nr)
    {
        if(maxim<nr)
        {
            maxim=nr;
            k=1;
        }
        else if(maxim==nr)
            k++;
    }

    if(k<=n/2)cout<<"DA";
    else cout<<"NU";

    return 0;
}
