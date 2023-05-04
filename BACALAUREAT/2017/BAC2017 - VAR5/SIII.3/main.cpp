#include <iostream>

using namespace std;

void produs(int a, int &k)
{
    k=1;
    while(a>0)
    {
        k=k+2;
        a=a/k;
    }

    k=k-2;
}

int main()
{
    int k;
    produs(200,k);
    cout<<k;
    return 0;
}
