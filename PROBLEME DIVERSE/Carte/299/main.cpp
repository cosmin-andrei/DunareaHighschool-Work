#include <iostream>
#include <fstream>
using namespace std;
ifstream in("cluj.in");

bool prim(int n)
{   if(n<2)return false;
    for(int d=2; d<=n/2; d++)
        if(n%d==0)return false;
    return true;

}

int a[100], b[100], c[100];
int main()
{
    int n,m;

    in>>n;
    for(int i=0; i<n; i++)
        in>>a[i];

    in>>m;
    for(int i=0; i<m; i++)
        in>>b[i];

    int i=0, j=0, k=0;
    while(i<n && j<m)
        if(a[i]<b[j])
            if(prim(a[i])==true) c[k++]=a[i++];
            else i++;
        else if(prim(b[j])==true) c[k++]=b[j++];
        else j++;

    while(i<n)
        if(prim(a[i])==true) c[k++] = a[i++];
        else i++;

    while(j<m)
        if(prim(b[j])==true)  c[k++] = b[j++];
        else j++;

    for(i=0; i<k; i++)
        cout<<c[i]<<" ";

    return 0;
}
