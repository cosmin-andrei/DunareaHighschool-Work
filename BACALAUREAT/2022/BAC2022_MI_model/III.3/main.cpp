#include <iostream>
#include <fstream>
using namespace std;

ifstream fin("bac.txt");

int main()
{
    int n, poz=0, maxim=0, p[10]= {0}, u[10]= {0};
    while(fin>>n)
    {
        poz++;
        if(n%2==0)
        {
            if(p[n]==0)p[n]=poz;
            u[n]=poz;
        }
    }

    for(int i=0; i<=8; i=i+2)
        if(u[i]-p[i]+1>maxim)maxim=u[i]-p[i]+1;

    cout<<maxim<<endl;

    for(int i=0; i<=8; i=i+2)
        if(u[i]-p[i]+1==maxim)cout<<i<<" ";

    return 0;
}
