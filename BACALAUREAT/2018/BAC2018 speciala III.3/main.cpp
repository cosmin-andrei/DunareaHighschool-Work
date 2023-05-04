#include <iostream>
using namespace std;

int echilibrat(int n)
{
    int st=0, dr=0, c=0;
    while(n)
    {
        if(c%2==0) st=st+n%10;
        else dr=dr+n%10;

        n=n/10;
        c++;
    }

    if(st==dr)
        return 1;

    return 0;
}

int main()
{
    cout<<echilibrat(25163912);
}
