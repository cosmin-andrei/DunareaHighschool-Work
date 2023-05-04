#include <iostream>
using namespace std;

int ranguri(int n)
{
    int k=0,l=0;
    while(n)
    {
        if(n%10==l)
            k++;
        l++;
        n=n/10;
    }

    return k;
}

int main()
{
    cout<<ranguri(6594270);
    return 0;
}
