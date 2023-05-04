#include <iostream>
using namespace std;

void triplete(int n)
{
    int x,y,z;
    for(x=0; x<=n-2; x++)
        for(y=x+1; y<=n-1; y++)
        for(z=y+1; z<=n; z++)
        if(x*y+y*z==n)cout<<"("<<x<<","<<y<<","<<z<<")"<<endl;

}

int main()
{
    triplete(8);
    return 0;
}
