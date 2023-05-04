#include <iostream>
using namespace std;

int nrDiv(int a, int b)
{
    int k=0;
    for(int n=a; n<=b; n++)
    {
        int d=1;
        while(d*(d+1)<n)
            d++;

        if(d*(d+1)==n) k++;

    }

    return k;
}

int main()
{
    cout<<nrDiv(10,40);
    return 0;
}
