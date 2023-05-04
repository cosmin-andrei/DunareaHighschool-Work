#include <iostream>

using namespace std;

void afisare(int x, int y, int k)
{
    int l=0;
    for(int i=x; i<=y; i++)
    {
        if(l<k)
        {
            cout<<i<<" ";
            l++;
        }
        else
        {
            cout<<"* "<<i<<" ";
            l=1;
        }

    }
}

int main()
{
    afisare(11,21,4);
    return 0;
}
