#include <iostream>
using namespace std;

int Cifre(int n)
{
    int vf[10]={0};
    while(n)
    {
        vf[n%10]++;
        n=n/10;
    }

    int k=0;
    for(int i=0; i<=9; i++)
        if(vf[i]==1)k++;

    return k;
}

int main()
{
    cout<<Cifre(9272017);
    return 0;
}
