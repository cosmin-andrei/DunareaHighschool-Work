#include <iostream>
#include <fstream>
using namespace std;
ifstream f("sume.in");

int main()
{
    int n,S,o[30];
    f>>n>>S;
    for(int i=1; i<=n; i++)
    {
        f>>o[i];
    }

    for(int i=1; i<n; i++)
        for(int j=i+1; j<=n; j++)
            if(o[i] < o[j])
            {
                int aux = o[i];
                o[i] = o[j];
                o[j] = aux;
            }
    int i=1,k=0,total=0;
    int suma;
    while(i<=n)
    {
        if(S>0)
        {
            k=S/o[i];
            if(k>0)
                cout<<k<<"  de "<<o[i]<<endl;
            suma=o[i]*k;
            S=S-suma;
            total=total+k;
        }
        i++;
    }
    cout<<"monede:"<<total;
}

