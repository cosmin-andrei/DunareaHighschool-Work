#include <iostream>

using namespace std;
ifstream f("bac.txt");
int main()
{
    int n,nmax=0,nmin=99;
    while(f>>n)
    {
        if(n%100==0)
        {
            if(nmin>n)nmin=n;
            else if(nmax<n)nmax=n;
        }
    }
    cout<<nmin-1<<" "<<nmax+1;
    return 0;
}
