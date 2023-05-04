#include <iostream>
using namespace std;

int suma(int n)
{
    int s=1;
    for (int d=4; d<=n ; d++)
    {
        if (n%d==0)
        {
            int p=1;
            for (int i=4; i<=d && p==1; i++)
                if (d%i==0) p=0;
            if (p==0) s=s+d;
        }
    }

    return s;

}

int main()
{
    int n;
    cin>>n;
    cout<<suma(n);
}
