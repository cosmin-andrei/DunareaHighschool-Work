#include <iostream>
#include <fstream>
using namespace std;
ifstream f("numere.in");
int main()
{
    int n,nr,n1,k=0;
    f>>n;
    f>>n1;
    while(f>>nr)
    {
        if(n1!=nr)k=k+(n1-nr);
        n1=nr;
    }
    k=k+n1-1;
    cout<<k;

}
