#include <iostream>
#include <fstream>
using namespace std;
ifstream f("date.in");
int n, a[10][10], c[10],l[10];
int main()
{
    f>>n;
    for(int i=1; i<=n; i++)
        for(int j=1; j<=n; j++)
        {
            int x;
            f>>x;
            a[i][j]=x;
        }

    for(int j=1; j<=n; j++)
    {
        int s=0;
        for(int i=1; i<=n; i++)
            s=s+a[i][j];
        c[j]=s;
    }


    for(int i=1; i<=n; i++)
    {
        int s=0;
        for(int j=1; j<=n; j++)
            s=s+a[i][j];
        l[i]=s;
    }

    for(int i=1; i<=n; i++)
        cout<<i<<" -grad intern- "<<c[i]<<" -grad extern- "<<l[i]<<" -grad total- "<<l[i]+c[i]<<endl;


    return 0;
}
