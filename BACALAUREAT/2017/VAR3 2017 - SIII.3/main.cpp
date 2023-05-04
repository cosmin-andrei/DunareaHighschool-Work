#include <iostream>
using namespace std;

void identice(int a, int b)
{
    for(int nr=a; nr<=b; nr++)
    {
        int ok=1,aux=nr;
        while(aux>=10 && ok==1)
        {
            if(aux%10!=aux/10%10)
                ok=0;

            aux=aux/10;
        }

        if(ok==1)
            cout<<nr<<" ";
    }
}

int main()
{
    identice(700,1500);
    return 0;
}
