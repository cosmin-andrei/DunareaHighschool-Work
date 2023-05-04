#include <iostream>

using namespace std;

void divizor(int a, int b, int k, int &nr)
{
    nr=0;
    for(int i=a; i<=b; i++)
        if(i%k==0 && i%10==k)
            nr++;
}

int main()
{
    int nr;
    divizor(3,50,4,nr);
    cout<<nr;
    return 0;
}
