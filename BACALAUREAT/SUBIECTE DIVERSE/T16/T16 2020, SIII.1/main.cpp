#include <iostream>
#include <cstring>
using namespace std;

int nrDivPrimi(int n)
{
    int d=2,nrdiv=0;
    while(n>1)
    {
        int k=0;
        while(n%d==0)
        {
            ++k;
            n=n/d;
        }

        ++d;
        if(k%2!=0) nrdiv++;

    }

    return nrdiv;
}

int main()
{
    cout<<nrDivPrimi(9000);
    return 0;
}
