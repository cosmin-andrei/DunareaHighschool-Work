#include <iostream>
using namespace std;

int CifrePrime(int n)
{
    int s=0;
    while(n)
    {
        int ok=1;
        for(int d=2; d<=(n%10)/2; d++)
            if((n%10)%d==0)
                ok=0;

        if(n%10!=1 && n%10!=0 && ok==1)
            s=s+n%10;

            n=n/10;
    }

    return s;
}

int main()
{
    cout<<CifrePrime(1235405);
    return 0;
}
