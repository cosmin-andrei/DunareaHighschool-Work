#include <iostream>
#include <fstream>
using namespace std;

ifstream f("bac.txt");

int main()
{
    int n, num,p1,i1,p2,i2,maxp1,maxi1,minp2,mini2, paritar;
    f>>n;

    for(int i=1; i<=n; ++i)
    {
        f>>num;
        if(num%2)
        {
            if(i1==0)
            {
                maxi1=num;
                i1=1;
            }
            else if (num>maxi1) maxi1=num;
        }

        else
        {
            if (p1==0)
            {
                maxp1=num;
                p1=1;
            }
            else if (num>maxp1) maxp1=num;
        }
    }

    for(int i=n+1; i<=2*n; ++i)
    {
        f>>num;
        if(num%2)
        {
            if (i2==0)
            {
                mini2=num;
                i2=1;
            }

            else if (num<mini2) mini2=num;

        }

        else
        {
            if (p2==0)
            {
                minp2=num;
                p2=1;
            }
            else if (num<minp2) minp2=num;
        }
    }

    if(p1*i1)
    {
        if (p2*i2) paritar=1;
        else
        {
            if (p2)
            {
                if (maxi1<minp2) paritar=1;
            }

            else
            {
                if (maxp1<mini2) paritar=1;
            }
        }
    }

    else
    {
        if (p1)
        {
            if (p2) paritar=1;
            else if (maxp1<mini2) paritar=1;
        }

        else if (i2) paritar=1;
        else if (maxi1<minp2) paritar=1;

    }

}

if (paritar) cout << "DA";
else cout << "NU";

}
