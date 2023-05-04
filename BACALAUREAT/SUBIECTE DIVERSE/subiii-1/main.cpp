#include <iostream>
using namespace std;
void prime(long int n,long int &x,long int &y)
{
    int g=0,ok;
    for(long int i=n-1; i>=5 && g<2; i--)
    {
        ok=1;
        for(int d=2; d<=i/2; d++)
            if(i%d==0)
            {
                ok=0;
                break;
            }

        if(ok==1)
        {
            if(g==0)y=i;
            else x=i;
            g++;

        }

    }
}

int main()
{long int x,y;
prime(49,x,y);
cout<<x<<" "<<y;
    return 0;
}
