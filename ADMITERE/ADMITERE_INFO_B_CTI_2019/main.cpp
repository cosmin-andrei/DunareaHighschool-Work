#include <iostream>
#include <fstream>
using namespace std;
int main()
{
    ifstream fin("admitere.txt");

    int n,a[50];
    fin>>n;

    for(int i=0; i<n; i++)
        fin>>a[i];

    ///a
    int maxim=0;
    for(int i=0; i<n-1; i++)
        for(int j=i+1; j<n; j++)
            if(min(a[i],a[j])*(j-i) > maxim)
                maxim = min(a[i],a[j])*(j-i);

    cout<<maxim<<endl;

    ///b
    int m,c[50],h;

    fin>>m;
    for(int i=0; i<m; i++)
        fin>>c[i];

    int valmax=0;

    for(int i=0; i<m; i++)
        if(c[i]!=1)
        {
            h=0;
            for(int j=0; j<m; j++)
                if(c[j]>=c[i])h++;

            if(min(c[i],h) > valmax)
                valmax=min(c[i],h);
        }

        cout<<valmax;

    return 0;
}
