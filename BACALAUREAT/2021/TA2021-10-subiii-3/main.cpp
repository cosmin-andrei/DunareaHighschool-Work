#include <iostream>
#include <fstream>
using namespace std;

ifstream f("bac.txt");

int main()
{
    int x,nr,k=0;
    f>>nr;
    while(f>>x)
    {
        if(x<nr)k++;
    }

    cout<<k+1;

    return 0;
}
