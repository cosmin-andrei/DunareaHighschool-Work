#include <iostream>

int main()
{

    int n,k;
    cin>>n>>k;

    while(n>=1)
    {
        if(n>k)
            i=k;
        else i=n;
        n=n-i;
        t=k;

        while(i>=1)
        {
            cout<<t<<" ";
            i--;
            t--;
        }
    }


    return 0;
}
