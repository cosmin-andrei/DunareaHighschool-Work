#include <iostream>

using namespace std;
int f(long int a)
{
    for(int d=2; d<=a; d++)
        if(a%d==0)return d;
}
int main()
{
    int n,nr;
    cin>>n;
    for(int i=1; i<=n; i++)
    {
        cin>>nr;
        if(f(nr)==nr)cout<<nr<<" ";
    }
    return 0;
}
