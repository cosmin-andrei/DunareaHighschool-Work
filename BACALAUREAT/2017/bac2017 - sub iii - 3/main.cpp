#include <iostream>
using namespace std;
int ranguri (int n)
{
    int k=0,d=0;

    do
    {
        if(n%10==k)d++;
        n/=10;
        k++;
    }
    while(n!=0);

    return d;
}
int main()
{
    int n;
    cin>>n;
    cout<<ranguri(n);
    return 0;
}
