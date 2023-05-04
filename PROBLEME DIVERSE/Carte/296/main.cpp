#include <iostream>
#include <fstream>
using namespace std;
ifstream in("cluj.in");
ofstream g("date.txt");
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
            if(a[i]%5==0)
                c[k++] = a[i++];
            else i++;
        else if(b[j]%5==0)
            c[k++] = b[j++];
        else j++;

    while(i<n)
        if(a[i]%5==0)
            c[k++] = a[i++];
        else i++;

    while(j<m)
        if(b[j]%5==0)
            c[k++] = b[j++];
        else j++;

    for(i=0; i<k; i++)
        g<<c[i]<<" ";

    return 0;
}
