#include <iostream>
using namespace std;

void frate(int x, int &y)
{
    int k=1;
    while(x)
    {
        if(x%10==9)
        {
            y=-1;
            break;
        }

        y=y+k*(x%10+1);
        k=k*10;
        x=x/10;

    }

}

int main()
{
    int y=0;
    frate(1027,y);
    cout<<y;
    return 0;
}
