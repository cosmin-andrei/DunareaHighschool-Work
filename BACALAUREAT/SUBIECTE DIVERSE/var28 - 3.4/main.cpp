#include <iostream>
#include <fstream>
using namespace std;

ifstream f("numere.in");

int primul(int a)
{
    int div=2;
    while(div<=a/2)
    {
        if(a%div==0)
        {
            return div;
        }

        div++;
    }
    return a;
}

int main()
{
    int n, v[100];
    f>>n;

    for(int i=0; i<n; i++)
        f>>v[i];

    for(int i=0; i<n; i++)
    {
        int nr1=0, nr2=0;

        nr1=primul(v[i]);
        nr2=primul(v[i]/nr1);
        if(v[i]==nr1*nr2)
            cout<<v[i]<<" ";

    }

    return 0;
}
