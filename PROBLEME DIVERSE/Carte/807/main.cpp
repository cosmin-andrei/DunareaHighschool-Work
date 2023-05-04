#include <iostream>
#include <fstream>
using namespace std;
ifstream fin("nucitesc.in");

int main()
{
    int n,v[100],l[100];
    fin>>n;
    for(int i=1; i<=n; i++)
        fin>>v[i];

    int lmax,poz,i,j;

    for(i=1; i<=n; i++)
    {
        lmax=0;
        for(j=1; j<i; j++)
            if(lmax<l[j] && v[i]>v[j])
                lmax=l[j];
        l[i]=lmax+1;
    }
    int maxi=0;

    for(i=1; i<=n; i++)
        if(maxi<l[i])
        {
            maxi=l[i];
            poz=i;
        }
    cout<<maxi<<endl;
    cout<<v[poz]<<" ";
    for(i=poz; i>=1; i--)
        if(v[poz]>v[i] && l[poz]==l[i]+1)
        {
            cout<<v[i]<<" ";
            poz=i;
        }
    int nr=0;
    cout<<endl;

    for(i=poz; i>=1; i--)
    {

        for(j=i-1; j>=1; j--)
            if(v[i]>v[j] && l[i]==l[j]+1)
            {
                nr++;
                cout<<i<< ' '<<j<<endl;
            }
    }

    cout<<endl<<nr;

    return 0;
}
