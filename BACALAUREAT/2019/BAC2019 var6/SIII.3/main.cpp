#include <iostream>
#include <fstream>
using namespace std;

ifstream fin("bac.txt");

int vf[10];
int main()
{
    int n,k=0;
    while(fin>>n)
    {
        while(n)
        {
            vf[n%10]++;
            n=n/10;
        }
        ++k;
    }

    for(int i=9; i>=0 && k!=0; i--)
        if(vf[i]>=k)
        {
            cout<<i;
            k=0;
        }
    return 0;
}
