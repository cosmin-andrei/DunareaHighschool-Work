#include <iostream>
#include <fstream>
using namespace std;

ifstream f1("bac1.txt");
ifstream f2("bac2.txt");

int main()
{
    int n1,n2,x,y,i=1,j=1;

    f1>>n1;
    f1>>x;
    f2>>n2;
    f2>>y;

    while(i<=n1 && j<=n2)
    {
        if(x<y)
        {
            if(x%5==0)
                cout<<x<<" ";
            f1>>x;
            i++;
        }
        else if(x>y)
        {
            if(y%5==0)

                cout<<y<<" ";
            f2>>y;
            j++;

        }
        else
        {
            f1>>x;
            f2>>y;
            i++;
            j++;
        }
    }

    while(f1>>x)
        if(x%5==0)cout<<x<<" ";

    while(f2>>y)
        if(y%5==0)cout<<y<<" ";

     if(x%5==0)cout<<x<<" ";
     if(y%5==0)cout<<y<<" ";

    return 0;
}
