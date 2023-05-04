#include <iostream>
#include <fstream>
using namespace std;

ifstream fin("bac.txt");

int main()
{
    int v[10]= {0},n;

    while(fin>>n)
    {
        while(n)
        {
            v[n%10]++;
            n=n/10;
        }
    }

    int lmax=0, cifra;
    for(int i=0; i<=7; i++)
        if(v[i]+v[i+2]>=lmax)
        {
            lmax=v[i]+v[i+2];
            cifra=i;
        }

    for(int i=1; i<=v[cifra+2]; i++)
        cout<<cifra+2;

    for(int i=1; i<=v[cifra]; i++)
        cout<<cifra;





    return 0;
}
