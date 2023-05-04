#include <iostream>
using namespace std;

int kpn (int a, int b, int k)
{ int s,ok=-1;
if(a>b)
    swap(a,b);

for(int i=a; i<=b; i++)
{
    s=i+1;
    for (int j=2; j<=i/2; j++)
        if(i%j == 0) s=s+j;
    if(i%2 == s%2)k--;
    if(k == 0)
    {
        ok = i;
        break;
    }
}
return ok;
}


int main()
{
    cout<<kpn(27,50,3);
    return 0;
}
