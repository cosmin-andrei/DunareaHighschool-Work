#include <iostream>
#include <fstream>
#include <cstring>
using namespace std;
ifstream f("date.in");
struct sportiv
{
    char nume[30];
    int punctaj;
} v[30];

int main()
{
    int n;
    f>>n;
    for(int i=1; i<=n; i++)
        f>>v[i].nume>>v[i].punctaj;

    for(int i=1; i<n; i++)
        for(int j=i+1; j<=n; j++)
            if(v[i].punctaj<v[j].punctaj)swap(v[i],v[j]);
            else if(v[i].punctaj==v[j].punctaj && strcmp(v[i].nume,v[j].nume)>0) swap(v[i],v[j]);

    if(n>=6)
    {
        for(int i=1; i<=6; i++)
            cout<<v[i].nume<<" "<<v[i].punctaj<<endl;
        int i=6;
        while(v[i].punctaj==v[i+1].punctaj && i<n)
        {
            cout<<v[i+1].nume<<" "<<v[i+1].punctaj;
            i++;
            cout<<endl;
        }
    }
    else for(int i=1; i<=n; i++)
            cout<<v[i].nume<<" "<<v[i].punctaj<<endl;


    return 0;
}
