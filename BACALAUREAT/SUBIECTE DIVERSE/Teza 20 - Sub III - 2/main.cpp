#include <iostream>
using namespace std;

int produs(int n, int x[])
{
    int pmax=-9999999;
    for(int i=0; i<n-1; i++)
        for(int j=i+1; j<n; j++)
    {
        if(pmax<x[i]*x[j])
            pmax=x[i]*x[j];
    }
    return pmax;
}

int main()
{
    int x[6]={-60,36,-8,-2,10,5};
    cout<<produs(6,x);
    return 0;
}
