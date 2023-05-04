#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int a,b;
    cin>>a>>b;

    int s=0;
    for(int x=a; x<=b; x++)
        for(int j=1; j<=x/2; j++)
            if(x%j==0 && sqrt(j)*sqrt(j)==j)
                {s=s+j;
                cout<<j<<" ";
                }

    cout<<s;
    return 0;
}
