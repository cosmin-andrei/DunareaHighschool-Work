#include <iostream>
#include <fstream>
using namespace std;

ifstream f("bac.txt");

int main()
{
    int x, v[100]= {0};
    while(f>>x)
    {
        while(x)
        {

            v[x%100]++;
            x=x/10;
        }
    }

    int maxim=0;
    for(int i=10; i<=99; i++)
        if(maxim<v[i])
            maxim=v[i];

    for(int i=10; i<=99; i++)
        if(v[i]==maxim)
            cout<<i<<" ";



    return 0;
}
