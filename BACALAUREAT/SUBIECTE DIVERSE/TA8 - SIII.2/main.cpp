#include <iostream>
#include <fstream>
using namespace std;

ifstream fin("bac.txt");

int main()
{
    int a=0, b=0, nr;
    while(fin>>nr)
    {
        if(a==0 && b==0 && nr%2==1) a=nr;
        else if(b==0 && nr%2==1) b=nr;
        else if(nr%2==1)
        {
            a=b;
            b=nr;
        }
    }

    cout<<a<<" "<<b;
    return 0;
}
