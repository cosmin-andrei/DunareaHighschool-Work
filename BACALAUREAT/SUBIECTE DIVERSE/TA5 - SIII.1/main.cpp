#include <iostream>
using namespace std;

int identice(int n)
{
    int c=n%10;
    n=n/10;
    while(n)
    {
        if(n%10!=c)
            return 0;
        n=n/10;
    }

    return 1;
}

int main()
{
    cout<<identice(222);
    return 0;
}
