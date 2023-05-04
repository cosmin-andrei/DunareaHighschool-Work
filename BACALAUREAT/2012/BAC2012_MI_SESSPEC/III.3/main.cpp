#include <iostream>
using namespace std;

void minusp(int &n, int v[])
{
    for(int i=0; i<n-1; i++)
        if(v[i+1]==0)
    {
        n++;
        for(int j=n-1; j>i; j--)
            v[j]=v[j-1];
        v[i+1]=v[i]*-1;
        i++;
    }
}

int main()
{
    int n,v[50];
    cin>>n;
    for(int i=0; i<n; i++)
        cin>>v[i];

    minusp(n,v);

    for(int i=0; i<n; i++)
        cout<<v[i]<<" ";

    return 0;
}
