#include <iostream>
#include <fstream>
using namespace std;
ifstream f("numere.in");

int A[100], B[100];

int main()
{
    int na, nb, x, y, k=0;
    f>>na>>nb;

    for(int i=1; i<=na; i++)
    {
        f>>x;
        A[x%100]++;
    }

    for(int i=1; i<=nb; i++)
    {
        f>>y;
        B[y%100]++;
    }

    for(int i=0; i<100; i++)
        for(int j=0; j<100; j++)
    {
        if(i==j || (i%10==j/10 && i/10==j%10))k+=A[i]*B[j];
    }

    cout<<k;

    f.close();
    return 0;
}
