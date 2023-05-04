#include <iostream>

using namespace std;
ifstream f("nr.txt");
int main()
{
    int n,v[100];
    while(f>>n)
    {
        int nr=n,nmax=0,k=0;
        while(nr)
        {
            nr/=nr;
            k++;
        }
        if(k==3)v[nmax++]=n;
    }

    for(int i=0; i<nmax-1; i++)
        for(int j=i+1; j <nmax; j++)
        {
            if(v[i] > v[j])
            {
                int aux=v[i];
                v[i]=v[j];
                v[j] =aux;
            }
        }
    for(int i=0; i<nmax; i++)
        cout<<v[i]<<" ";
    return 0;
}
