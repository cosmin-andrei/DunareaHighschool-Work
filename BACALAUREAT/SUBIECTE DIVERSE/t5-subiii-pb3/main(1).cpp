#include <iostream>
#include <fstream>
using namespace std;

ifstream f("bac.txt");

int main()
{
    int n,x,maxi=0,i=1;
    f>>n;
    while(i<=n)
    {
        f>>x;
        if(x>=maxi) maxi=x;
        cout<<maxi<<" ";
        i++;
    }

    return 0;
}
