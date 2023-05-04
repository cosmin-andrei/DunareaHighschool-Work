#include <iostream>
#include <fstream>
using namespace std;

ifstream fin("bac.in");

int main()
{
    int nr, k=0, p1=0, p2=0, p3=0;

    while(fin>>nr)
    {
        ++k;
        if(nr<0)
        {
            if(p1==0) p1=k;
            else if(p2==0) p2=k;
            else p3=k;
        }
    }

    int l=max(p3-p2-1+p2-p1-1,k-p2);
    cout<<l;

    return 0;
}
