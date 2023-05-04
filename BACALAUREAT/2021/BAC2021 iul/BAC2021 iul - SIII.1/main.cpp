#include <iostream>

using namespace std;

void divPrim(int n, int &s)
{
    int d=2;
    s=0;
    while(n>1)
    {
        int k=0;
        while(n%d==0)
        {
            n=n/d;
            ++k;
        }

        if(k%2>0) s=s+d;
        d++;
    }
}

int main()
{
    int s;
    divPrim(360,s);
    cout<<s;
    return 0;
}
