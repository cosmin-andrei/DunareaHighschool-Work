#include <iostream>
#include <fstream>
using namespace std;

ifstream fin("bac.txt");

int main()
{
    int n,maxim=0;
    fin>>n;

    int nr;
    for(int i=0; i<n; i++)
    {
        fin>>nr;
        if(maxim<nr)
        {
            maxim=nr;
        }
        cout<<maxim<<" ";
    }


    return 0;
}
