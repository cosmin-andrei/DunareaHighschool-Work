#include <iostream>

using namespace std;

int sub(int v[100], int n, int x)
{
    int k=0;
    for(int i=0; i<n; i++)
        if(v[i]<x)k++;
    return k;
}

int main()
{int v[100],i,n;
cin>>n;
for(i=0;i<n;i++)
cin>>v[i];
if(sub(v,n,v[0])!=0) cout<<"DA";
else cout<<"NU";

    return 0;
}
