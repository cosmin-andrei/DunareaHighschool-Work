#include <iostream>

using namespace std;
int sum(long int x)
{
    int s=0;
    for(int d=1; d<=x; d++)
        if(x%d==0)s=s+d;
    return s;
}
int main()
{
    int n,k=0;
    cin>>n;
    for(int i=1; i<=n; i++)
       {int nr;
       cin>>nr;
        if(sum(nr)==nr+1)k++;}

    cout<<k;

    return 0;
}
