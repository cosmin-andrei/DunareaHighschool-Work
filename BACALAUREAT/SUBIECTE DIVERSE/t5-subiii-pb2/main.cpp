#include <iostream>
using namespace std;
int main()
{
    int a[100],k,n;
    cin>>n>>k;
    for(int i=1; i<=n; i++)
            a[i]=(i*k)%10;

    for(int i=1; i<=n; i++)
            cout<<a[i]<<" ";
    return 0;
}
