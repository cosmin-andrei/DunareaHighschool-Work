#include <iostream>
#include <cmath>
using namespace std;

float nreal(int x, int y)
{
    int aux=y, p=1;
    while(aux)
    {
        p=p*10;
        aux/=10;
    }

    x=x*p+y;
    return (float)x/p;

}

/*
float nreal(int x, int y)
{
    int aux=y,p=1,inv=0;
    float nr=x;

    while(aux)
    {
        p=p*10;
        inv = inv*10 + aux%10;
        aux=aux/10;
    }


    while(inv)
    {
        nr = nr*10 + inv%10;
        inv=inv/10;
    }

    nr=nr/p;
    return nr;
}
*/

int main()
{
    int x, y;
    cin>>x>>y;

    cout<<nreal(x,y);

    return 0;
}
