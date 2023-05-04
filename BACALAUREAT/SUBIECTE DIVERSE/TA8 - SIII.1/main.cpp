#include <iostream>
using namespace std;

void nrfp(int n, int& m)
{
    int maxi=0;
    for(int i=2; i<=n; i++)
    {
        int k=0,d=2;
        while(i)
        {
            while(i%d==0)
            {
                i=i/d;
                k++;
            }

            ++d;
        }

        if(maxi<k)
        {
            maxi=k;
            m=i;
        }


    }
}

int main()
{
    int m;

    nrfp(100,m);
    cout<<m;

    return 0;
}
