#include <iostream>
using namespace std;
bool median(int n, int v[], int poz)
{
    float s=0;
    for(int i=0; i<n; i++)
        s=s+v[i];
    s=s-v[poz];
    s=s/(n-1);
    if(v[poz]==s) return true;
    else return false;
}

int main()
{
    int n,v[100],x;
    cin>>n;
    for(int i=0; i<n; i++)
        cin>>v[i];
    int k=0;
    for(int i=0; i<n; i++)
        if(median(n,v,i))k++;
    cout<<k;

    return 0;
}
