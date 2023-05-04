#include <iostream>
#include <fstream>
using namespace std;
ifstream f("bac.in");
int a[100], b[100], c[100];
int main()
{
    int n,m;
    f>>n>>m;
    for(int i=0; i<n; i++)
        f>>a[i];
    for(int i=0; i<m; i++)
        f>>b[i];

    int i=n-1, j=m-1, k=0;
    while(i>=0 && j>=0)
        if(a[i]>b[j])
            if(a[i]%2==0) c[k++]=a[i--];
            else i--;
        else if(a[i]<b[j])
            if(b[j]%2==0) c[k++]=b[j--];
            else j--;
        else if(a[i]==b[j])
            if(a[i]%2==0)
            {
                c[k++]=a[i--];
                j--;
            }
            else
            {
                i--;
                j--;
            }

    while(i>=0)
        if(a[i]%2==0) c[k++]=a[i--];
        else i--;

    while(j>=0)
        if(b[j]%2==0) c[k++]=b[j--];
        else j--;

    for(i=0; i<k; i++)
        cout<<c[i]<<" ";

    return 0;
}
