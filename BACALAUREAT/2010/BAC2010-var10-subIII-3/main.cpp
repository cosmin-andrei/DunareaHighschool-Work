#include <iostream>
using namespace std;

void tablou(int n, int k, int a[])
{
    int i=0, nr=1;
    while(i<n*k)
    {
        int k1=0;
        while(k1<k)
        {
            a[i]=nr;
            i++;
            k1++;
        }
        nr++;
    }
}

int main()
{
    int n,k,a[50];
    cin>>n>>k;

    tablou(n,k,a);

    for(int i=0; i<n*k; i++)
        cout<<a[i]<<" ";

    return 0;
}
