#include <iostream>
using namespace std;

void compact(int &n, int a[])
{
    for(int i=1; i<n; i++)
        if(a[i]==a[i+1])
        {
            for(int j=i+2; j<n; j++)
                a[j-1]=a[j];
            n--;
        }
}

int main()
{
    int n=9, a[]={0,1,2,2,2,3,3,5,8,9};
    compact(n,a);
    for(int i=1; i<=n; i++)
        cout<<a[i]<<" ";
    cout<<endl<<n;

    return 0;
}
