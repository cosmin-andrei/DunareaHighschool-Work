#include <iostream>
#include <fstream>
using namespace std;

ifstream fin("bac.txt");

int main()
{
    int n, minim=0, ant, k=1;

    fin>>ant;

    while(fin>>n && minim==0)
        if(ant==n) k++;
        else if(k%2!=0) minim=ant;
        else
        {
            k=1;
            ant=n;
        }

    while(fin>>n);

    if(minim!=0) cout<<minim;
    else cout<<"nu exista";

    return 0;
}
