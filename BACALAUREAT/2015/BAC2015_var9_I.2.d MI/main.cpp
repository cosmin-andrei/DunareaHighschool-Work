#include <iostream>

using namespace std;

int main()
{
    int n,k,pm=0,i=1;

    cin>>n>>k;

    while(i<=n)
    {
        int x=i;
int        p=0;

        while(x%k==0)
        {
            x=x/k;
            p++;
        }

        if(p>pm)
            pm=p;

        i++;
    }

    cout<<pm;

    return 0;
}
