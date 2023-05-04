#include <iostream>
#include <fstream>
using namespace std;
ifstream f("bac.in");

int v[1000];
int main()
{
    int x;
    while(f>>x)
    {
        int nr=0,p=1;
        int u=x%10;
        x=x/10;
        while(x>=10)
        {
            nr=nr+p*(x%10);
            p=p*10;
            x=x/10;
        }
        if(x==u)v[nr]++;
    }

    for(int i=999; i>=0; i--)
        if(v[i]!=0)cout<<i<<" ";

    f.close();
    return 0;
}
