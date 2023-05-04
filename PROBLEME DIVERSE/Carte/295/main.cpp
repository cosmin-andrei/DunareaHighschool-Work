#include <iostream>
#include <fstream>
using namespace std;
ofstream g("date.txt");
int a[100], b[100], c[100];
int main()
{
    int n,m;

    cin>>n;
    for(int i=0; i<n; i++)
        cin>>a[i];

    cin>>m;
    for(int i=0; i<m; i++)
        cin>>b[i];

    int i=0, j=0, k=0;
    while(i<n && j<m)
        if(a[i]<=b[j])
            if(k>0 && a[i]%2==c[k-1]%2) i++;
            else
            c[k++] = a[i++];
        else if(k>0 && b[j]%2==c[k-1]%2) j++;
        else
            c[k++] = b[j++];

    if(i<n)
        c[k++]=a[i++];

    if(j<m)
        c[k++]=b[j++];

    for(i=0; i<k; i++)
        g<<c[i]<<" ";

    return 0;
}
