#include <iostream>
#include <cstring>
using namespace std;

void inserare(int n, int a[40])
{
    int t,p=0;
    for(int i=0; i<n; i++)
        if(a[i]%2==0)
        {
            for(t=n+p; t>i; t--)
                a[t+1]=a[t];
            a[i+1]=2011;
            p++;
        }
    n+=p;
}

int main()
{
  int a[100],n;
  cin>>n;
  for(int i=0; i<n; i++)
        cin>>a[i];
  inserare(n,a);
}
