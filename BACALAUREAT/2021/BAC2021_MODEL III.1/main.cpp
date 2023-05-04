#include <iostream>
using namespace std;

void prime(int n, int &x, int &y)
{
    int l=n-1;
    x=0; y=0;
    while(x==0 || y==0)
    {
        bool ok=true;
        for(int d=2; d<=l/2; d++)
            if(l%d==0) ok=false;

        if(ok==true && y==0)
            y=l;
        else if (ok==true) x=l;

        l--;
    }
}

int main()
{
    int n,x,y;
    cin>>n;
    prime(n,x,y);
    cout<<x<<" "<<y;
    return 0;
}
