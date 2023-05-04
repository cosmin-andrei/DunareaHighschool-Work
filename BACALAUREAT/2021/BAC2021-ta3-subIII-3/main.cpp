#include <iostream>
#include <fstream>
using namespace std;

ifstream f("bac.in");

int main()
{
    int k1=0,k2=0,k=0,n;
    while(f>>n)
    {
        k++;

        if(n>=0)
        {
            k2=k;
            if(k1==0)k1=k;
        }
    }

    cout<<max(k2,k-(k1-1));

    return 0;
}
