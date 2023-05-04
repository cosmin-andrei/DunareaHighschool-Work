#include <iostream>

using namespace std;

int suma_div(long int n)
{
    int s=0;
    for(int d=1; d<=n; d++)
        if(n%d==0)s=s+d;
    return s;
}

int main()
{
    int n,i=2;
    cin>>n;
    while(n)
    {
        cout<<"("<<i<<","<<suma_div(i)<<")";
        i++; n--;
    }
    return 0;
}
