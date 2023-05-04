#include <iostream>
#include <fstream>
using namespace std;
ifstream f("NUMERE.IN");

int main()
{

    int n,x=-1;
    f>>n;
    float a,b;
    f>>a;
    while (f>>b)
    {

        if((int)b-(int)a<x || x==-1)
            x=(int)b- (int)a;
        a=b;
    }

    cout<<x;


    return 0;
}
