#include <iostream>
#include <fstream>
#include <cmath>
using namespace std;

ifstream fin("bac.txt");

int main()
{
    int n, nr, v[10]= {0};
    fin>>n;

    while(fin>>nr)
    {
        int k=0;
        while(nr>1)
        {
            k++;
            nr=nr/10;
        }
        v[k]++;

    }

    int k=0;
    for(int i=0; i<10; i++)
        if(k+v[i]<n)
            k=k+v[i];
        else
        {
            nr=pow(10,i);
            i=10;
        }

    if(k<n) cout<<"nu exista";
    else cout<<nr;
    return 0;
}
