#include <iostream>
using namespace std;

void radical(int n, int& x, int& y)
{
    for(int i=1; i*i<=n; i++)
    if(n%(i*i)==0)
    {
        x=i;
        y=n/(i*i);
    }
}

int main()
{
    int x,y;
    radical(15000,x,y);
    cout<<x<<" "<<y;
}
