#include <iostream>

using namespace std;

int main()
{
    int n,k,i,j=1,a[50];
    cin>>n>>k;

    i=n;

    while(k)
    {
        if(i%n==0)
            {a[j]=i;
            j++;
            k--;
            }
        i++;
    }

    for(j=j-1;j>=1;j--)
        cout<<a[j]<<" ";

    return 0;
}
