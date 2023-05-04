#include <iostream>
#include <fstream>
using namespace std;

ifstream f("date.in");

struct sala
{
    int hi, mi, ht, mt;
    int hmi, hmt;
} v[20];

int main()
{
    int n,o[100];
    f>>n;
    for(int i=0; i<n; i++)
    {
        f>>v[i].hi>>v[i].mi>>v[i].ht>>v[i].mt;
        v[i].hmi=v[i].hi*60+v[i].mi;
        v[i].hmt=v[i].ht*60+v[i].mt;
        o[i]=i+1;
    }
    for(int i=0; i<n-1; i++)
        for (int j=i+1; j<n; j++)
            if(v[i].hmt>v[j].hmt)
            {
                sala aux = v[i];
                v[i] = v[j];
                v[j] = aux;
                swap(o[i],o[j]);

            }
int i=0,x=v[i].hmt;
 cout<<"spectacolul "<<o[i]<<"="<<v[i].hi<<":"<<v[i].mi<<"-"<<v[i].ht<<":"<<v[i].mt<<endl;
    while(i<n)
    {
        if(x<=v[i].hmi)
           {
               cout<<"spectacolul "<<o[i]<<"="<<v[i].hi<<":"<<v[i].mi<<"-"<<v[i].ht<<":"<<v[i].mt<<endl;
               x=v[i].hmt;
           }
        i++;
    }

    return 0;
}
