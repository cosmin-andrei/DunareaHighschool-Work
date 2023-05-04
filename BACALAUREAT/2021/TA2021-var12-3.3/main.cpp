#include <iostream>
#include <fstream>
using namespace std;

ifstream f("bac1.txt");

int main()
{
    int n,nr,k=0;
    f>>n;
    while(f>>nr)
    {
        if(nr>=n) k++;
    }

    cout<<k+1;

    return 0;
}
