#include <iostream>
using namespace std;


int mozaic(unsigned int x, unsigned int y, unsigned int z)
{
    int maxim=0;
    if(x>y)maxim=x;
    else maxim=y;
    if(maxim<z)maxim=z;

    for(int i=maxim; i<=x*y*z; i++)
    {
        if(i%x==0 && i%y==0 && i%z==0)
            return i;
    }



}


int main()
{
    int x,y,z;
    cin>>x>>y>>z;
    cout<<mozaic(x,y,z);
    return 0;
}
