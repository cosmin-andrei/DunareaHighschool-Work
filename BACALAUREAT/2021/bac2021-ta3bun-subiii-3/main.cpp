#include <iostream>
#include <fstream>
using namespace std;

ifstream f("bac.in");
int v[10],poz[10];
int main()
{
    int c,k=0,n;
    while(f>>n)
    {
        k++;
        c=n/10%10;
        v[c]++;
        poz[c]=k;

    }
    int maxim=0;
    for(int i=0; i<10; i++)
        if(v[i]>maxim)maxim=v[i];

    for(int i=0; i<10; i++)
        if(v[i]==maxim)cout<<poz[i]<<" ";

        return 0;
}
