#include <iostream>
using namespace std;

int putere(int n)
{
    int d=2, pmin=100000000, dmin, p;

    while(n>1)
    {
        p=0;
        while(n%d==0)
        {
            p++;
            n=n/d;
        }
        if(p>0 && p<pmin)
        {
            pmin=p;
            dmin=d;
        }

        d++;

    }
    return dmin;
}

int main()
{
    cout<<putere(880);
    return 0;
}
