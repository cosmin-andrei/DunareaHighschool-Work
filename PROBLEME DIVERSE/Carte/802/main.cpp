#include <iostream>
#include <fstream>
using namespace std;

ifstream f("date.in");

struct rucsac
{
    char nume[20];
    float greutate, valoare;
} v[30];


int main()
{
    float G;
    int n;
    f>>n>>G;
    for(int i=0; i<n; i++)
    {
        f>>v[i].nume>>v[i].greutate>>v[i].valoare;
    }

    for(int i=0; i<n-1; i++)
        for (int j=i+1; j<n; j++)
            if(v[i].valoare / v[i].greutate < v[j].valoare / v[j].greutate)
            {
                rucsac aux = v[i];
                v[i] = v[j];
                v[j] = aux;
            }

    float s=0,suma=0;
    int i=0;
    while(i<n)
    {
        if(s+v[i].greutate<=G)
        {
            cout << v[i].nume <<" " << v[i].greutate << " " << v[i].valoare << endl;
            s=s+v[i].greutate;
            suma=suma+v[i].valoare;
        }
        else break;
        i++;
    }
    cout<<suma;
    return 0;
}
