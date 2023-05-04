#include <iostream>

using namespace std;

int main()
{
    int x,y;
    cin>>x>>y;

    while(y>=x)
    {
        cout<<y<<" ";
        if(y%2!=0)
            y=y/2+1;
        else y=y-1;
    }


    return 0;
}
