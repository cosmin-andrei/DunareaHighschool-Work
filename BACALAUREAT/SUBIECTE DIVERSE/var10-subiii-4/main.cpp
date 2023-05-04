#include <iostream>
#include <fstream>
using namespace std;
ifstream f("produse.txt");
int p[10000];
int main()
{
    int tip, cantitate, pret;
    while(f>>tip>>catitate>>pret)
        p[tip]=cantitate*pret;

    for(i=0; i<10000; i++)
        if(p[i]!=0)cout<<i<<" "<<p[i]<<endl;
    return 0;
}
