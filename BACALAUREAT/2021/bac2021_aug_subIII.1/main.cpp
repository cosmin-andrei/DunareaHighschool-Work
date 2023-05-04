#include <iostream>
using namespace std;

void cuburi(int n)
{
    int b;
    for(int i=n; i>0; i--)
        cout<<i*i*i<<" ";
}

int main()
{
    int n;
    cin>>n;
    cuburi(n);
    return 0;
}
