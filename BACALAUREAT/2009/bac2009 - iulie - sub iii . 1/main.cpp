#include <iostream>
using namespace std;
void Impare(int &n)
{
    int nr=0,k=0;
    while(n)
    {
        if(n%2!=0)nr=nr*10+(n%10)-1;
        else nr=nr*10+n%10;
        if(n%10==0)k++;
        n=n/10;

    }
    while(nr)
    {
        n=n*10+nr%10;
        nr=nr/10;
    }
    for(int i=1; i<=k; i++)
        n=n*10;
}
int main()
{
    int n;
    cin>>n;
    Impare(n);
    cout<<n;
    return 0;
}
