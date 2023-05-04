#include <iostream>
#include <fstream>
using namespace std;
ifstream in("galati.in");
ofstream g("galati.out");
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
        if(a[i]==b[j])
        {
            i++;
            j++;
        }
        else if(a[i]<b[j])
                c[k++] = a[i++];
        else
            c[k++] = b[j++];

    while(i<n)
        c[k++] = a[i++];

    while(j<m)
        c[k++] = b[j++];

    for(i=0; i<k; i++)
        g<<c[i]<<" ";

    return 0;
}
