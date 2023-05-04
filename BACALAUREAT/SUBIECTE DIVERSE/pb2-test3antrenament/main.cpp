#include <iostream>
using namespace std;

struct cerc
{
    float raza;
    struct
    {
        float x,y;
    } centru;
} fig;


int main()
{
    cin>>fig.raza;
    cin>>fig.centru.x>>fig.centru.y;

    cout<<fig.raza<<" "<<fig.centru.x<<" "<<fig.centru.y;

    return 0;
}
