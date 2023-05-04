#include <iostream>
#include <fstream>
using namespace std;
ifstream f("bac.txt");

int main()
{
    int n,nr,maxi=0;
    f>>n;
    for(int i=1;i<=n;i++)
    {f>>nr;
        if(nr>maxi) maxi=nr;
        cout<<maxi<<" ";
    }

    return 0;
}
