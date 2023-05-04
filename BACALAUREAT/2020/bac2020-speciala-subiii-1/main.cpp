#include <iostream>

using namespace std;
int egal(int n)
{
    int cifra, nr=n;
    while(nr)
    {
        cifra=nr%10;
        if(cifra!=0)nr=0;
    }
    while(n)
    {
        if(cifra!=n%10 && n%10%2!=0)return 0;
        n=n/10;
    }
    return 1;
}
int main()
{
    int n;
    cin>>n;
    if(egal(n)==1)cout<<"DA";
    else cout<<"NU";
    return 0;
}
