#include <iostream>

using namespace std;
int cifra (int n, int k)
{
    while(k)
    {
        n=n/10;
        k--;
    }
    if(n==0) return -1;
    else return n%10;
}
int main()
{
    long int x,y,inv-x=0,inv-y=0,nr=0;
    cin>>x>>y;
    while(x)
    {
        inv-x=inv-x*100+x%10;
        x=x/10;
    }
    while(y)
    {
        inv-y=inv-y*100+y%10;
        y=y/10;
    }

while(inv-y)
{if(inv-y%10==cifra(inv-x,1))}
    return 0;
}
