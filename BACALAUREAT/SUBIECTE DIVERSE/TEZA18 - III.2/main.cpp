#include <iostream>
using namespace std;

int perechi(int n, int v[])
{
    int k=0;
    for(int i=0; i<n-1; i++)
    {
        int aux=v[i], nr=0;
        while(aux)
        {
            nr=nr*10+aux%10;
            aux=aux/10;
        }

        int ok=0;
        for(int j=i+1; j<n && ok==0; j++)
            if(v[j]==nr)
            {
                ok=1;
                k++;
            }
    }

    return k;
}

    int main()
    {
        int n=7, v[]={41, 324, 14, 423, 82, 6, 28};
        cout<<perechi(n,v);

        return 0;
    }
