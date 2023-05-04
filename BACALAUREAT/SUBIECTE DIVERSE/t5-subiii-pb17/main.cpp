#include <iostream>
using namespace std;

int identice (int n)
{
    int ok;
    ok=1;
    while(n>9 && ok)
    {
        if(n%10!=n/10%10) ok=0;
        n=n/10;
    }
    return ok;
}

int main()
{
    cout << identice(2222);
    return 0;
}
