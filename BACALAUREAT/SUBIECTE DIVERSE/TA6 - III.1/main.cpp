#include <iostream>
#include <cmath>
using namespace std;

void numar(int n, int c, int& m)
{
    int ok=0, k=0;
    m=0;

    while(n)
    {
        if(c!=n%10)
        {
            int p;
            p=pow(10,k);
            m=m+(n%10)*p;
            ok=1;
            k++;
        }

        n=n/10;
    }

    if(ok==0) m=-1;
}

int main()
{
    int m;
    numar(50752,5,m);
    cout << m;
    return 0;
}
