#include <iostream>
#include <fstream>
using namespace std;
ifstream in("bac.txt");
int f[100];
int main()
{
    unsigned int x; //subnumar
    int y,nr;
    while(in>>nr)
    {
        while(nr>=10)
        {
            f[nr%100]++;
            nr=nr/10;
        }
    }

    unsigned int maxim=0;

    for(int i=99; i>=10; i--)
    {
        if(maxim<f[i])maxim=f[i];
    }

    for(int i=99; i>=10; i--)
    {
        if(maxim==f[i])cout<<i<<" ";
    }

    return 0;
}
