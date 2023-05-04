#include <iostream>
#include <fstream>
using namespace std;

ifstream f("bac.in");

int main()
{
    int n;
    int x=0, y=0, z=0;

    while(f>>n)
    {
        if(n%10==5)
        {
            if(n>=z)
            {
                x=y;
                y=z;
                z=n;
            }

            else if(n>=y)
            {
                x=y;
                y=n;
            }
            else if(n>x)
                x=n;
        }
    }

    if(z==0 || y==0 || x==0)cout<<"nu exista";
    else cout<<x<<" "<<y<<" "<<z;
    return 0;
}
