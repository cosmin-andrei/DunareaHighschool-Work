#include <iostream>
using namespace std;

int sPar(int n)
{
    if(n%2==0)
    {
        int s=0;
        for(int i=2; i<n; i++)
            if(n%i==0)
            s=s+i;
        if(s%2==0)
            return n;
        return sPar(n+1);
    }
    return sPar(n+1);
}

int main()
{
    cout << sPar(95);
    return 0;
}
