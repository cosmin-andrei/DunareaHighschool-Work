#include <iostream>

using namespace std;

void duplicare(int n, int &d)
{
    d=0;
    while(n)
    {
        int c=n%10;
        if(c%2!=0)
        {
            d=d*10+c;
            d=d*10+c;
        }
        else d=d*10+c;
        n=n/10;
    }
    if(d==0)d=-1;
    else
    {
        int nr=d;
        d=0;
        while(nr)
        {
            d=d*10+nr%10;
            nr=nr/10;
        }
    }
}

int main()
{
    int d,n;
    cin>>n;
    duplicare(n,d);
    cout<<d;

    return 0;
}
