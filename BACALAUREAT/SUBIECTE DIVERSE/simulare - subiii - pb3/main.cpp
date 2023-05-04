#include <iostream>
#include <fstream>
using namespace std;

ifstream f("bac.in");

int x[11];
int main()
{
    int s=0,n;

    while(f>>n)
    {
       x[n]++;
    }

    for(int i=1; i<=10; i++)
    {
        if(x[i]!=0) s=s+10+x[i]*i*i;
    }
    cout<<s;
    f.close();
    return 0;
}
