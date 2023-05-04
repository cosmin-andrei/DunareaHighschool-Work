#include <iostream>
using namespace std;

int armonie(int x, int y)
{
    int sx=0, sy=0, s=x+y;

    //calculam suma divizorilor lui x
    for(int d=1; d<=x; d++)
        if(x%d==0) sx=sx+d;

    //calculam suma divizorilor lui y
    for(int d=1; d<=y; d++)
        if(y%d==0) sy=sy+d;

    for(int i=sx+1; i<sy; i++)
        if(s==i) return 1;
    return 0;

}

int main()
{
    cout<<armonie(8,13);

    return 0;
}
