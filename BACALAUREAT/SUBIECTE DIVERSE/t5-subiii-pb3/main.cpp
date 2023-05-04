#include <iostream>
#include <fstream>
using namespace std;

ifstream f("bac.txt");

int main()
{
    int n,x,maxi;
    f>>n;
    while(f>>x)
    {

        if(x>=maxi) maxi=x;
        cout<<maxi<<" ";
    }

    return 0;
}
