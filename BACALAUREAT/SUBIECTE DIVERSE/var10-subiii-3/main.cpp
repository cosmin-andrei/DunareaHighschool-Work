#include <iostream>

using namespace std;
bool prim(int n)
{
    for(int d=2; d<=n/2; d++)
        if(n%d==0)return false;
    return true;
}
int sub(long int n,long int &a,long int &b)
{
    int k,v[2];
    while(k<=2)
    {
        for(long int i=n; i>0; i--)
            if(prim(i)==true)
            {
                v[k++]=i;
            }
    }
    a=v[0];
    b=v[1];
}
int main()
{
    long int n;
    cin>>n;
    int a,b;
    sub(n,a,b);
    cout<<a<<" "<<b;
    return 0;
}
