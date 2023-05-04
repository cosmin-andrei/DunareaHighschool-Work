#include <iostream>
using namespace std;

int factori(int n,int m)
{
    if(n>m)swap(n,m);
    int k=0,p1,p2,fp=2;
    while(n>1)
    {
        p1=0; p2=0;
        while(n%fp==0)
        {
            p1++;
            n=n/fp;
        }

         while(m%fp==0)
        {
            p2++;
            m=m/fp;
        }
        if(p1==p2 && p1!=0)
            k++;
        fp++;
    }
return k;
}

int main()
{   cout<<factori(16500,10780);

    return 0;
}
