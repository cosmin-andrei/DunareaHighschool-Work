#include <iostream>
#include <fstream>
using namespace std;

ifstream fin("bac.in");

int main()
{
    int m, n, a[100000], b[100000];

    fin>>m>>n;

    for(int i=1; i<=m; i++)
        fin>>a[i];

    for(int j=1; j<=n; j++)
        fin>>b[j];

    int i=1, j=1, p=-1;
    while(i<m && j<n)
        if(a[i]<=b[j])
        {
            if(p != a[i]%2)
                cout<<a[i]<<" ";

            p=a[i]%2;
            i++;
        }
        else
        {
            if(p != b[j]%2)
                cout<<b[j]<<" ";

            p=b[j]%2;
            j++;
        }

    while(i<m)
    {
        if(p!=a[i]%2)
            cout<<a[i]<<" ";
        p=a[i]%2;
        i++;
    }

    while(j<n)
    {
        if(p!=b[j]%2)
            cout<<b[j]<<" ";
        p=b[j]%2;
        j++;

    }

    return 0;
}
