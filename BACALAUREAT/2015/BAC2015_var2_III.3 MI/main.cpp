#include <iostream>
#include <fstream>
using namespace std;

ifstream fin("bac.txt");

int main()
{
    int n, nr, v1[6]= {0}, v2[6]= {0};
    fin>>n;

    for(int i=1; i<=n; i++)
    {
        fin>>nr;
        v1[nr]++;

    }

    for(int i=1; i<=n; i++)
    {
        fin>>nr;
        v2[nr]++;

    }

    int s=0;
    for(int i=1; i<=5; i=i+2)
        for(int j=2; j<=4; j=j+2)
            s=s+v1[i]*i*v2[j]*j;

    for(int i=2; i<=4; i=i+2)
        for(int j=1; j<=5; j=j+2)
            s=s+v1[i]*i*v2[j]*j;

    cout<<s;

    return 0;
}
