#include <iostream>
#include <fstream>
using namespace std;
ifstream f("BAC.TXT");

int main()
{
    int n,v[10]= {0},poz[10],nr=0;
    while(f>>n)
    {
        v[n/10%10]++;
        nr++;
        poz[n/10%10]=nr;
    }

    int maxi=0,pozitie;
    for(int i=0; i<10; i++)
        if(maxi<v[i])
        {
            maxi=v[i];
            pozitie=poz[i];
        }

    cout<<pozitie;

    return 0;
}
