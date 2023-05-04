#include <iostream>
#include <fstream>
using namespace std;
ifstream f("bac.in");

int main()
{
    int n,k=0,k1,k2,k3,d1,d2,d3;

    while(f>>n)
    {

        k++;
        if(n<0)
        {
            k1=k2;
            k2=k3;
            k3=k;
        }
    }

    d1=k-k2;
    d2=k3-k1-1;
    d3=k2-1;

    if(d1>d2)
        if(d1>d3)cout<<d1;
        else cout<<d3;
    else if(d2>d3)cout<<d2;
    else cout<<d3;

}
