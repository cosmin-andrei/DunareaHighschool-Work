#include <iostream>

using namespace std;

int sub(int v[100], int n, int x)
{
    int k=0;
    for(int i=0; i<n; i++)
        if(v[i]==x)k++;
    return k;
}

int main()
{
    int i,a[100],g=1,b[100],n;
    cin>>n;
    for(i=0; i<n; i++)
        cin>>a[i];
    for(i=0; i<n; i++)
        cin>>b[i];
    for(i=0; i<n; i++)
    {
        int c=a[i];
        if(sub(a,n,c)!=sub(b,n,c[i]))
        {
            g=0;
            break;
        }
    }
    if(g==0)cout<<"NU";
    else cout<<"DA";
    return 0;
}
