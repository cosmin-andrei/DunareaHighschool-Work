#include <iostream>
using namespace std;
void f(int &a)
{
    int s=0,k,i=2;
    while(a>1)
    {
        k=0;
        while(a%i==0)
        {
            k++;
            a=a/i;
        }
        s=s+k;
        i++;

    }
    a=s;
}
int main()
{
    int a,a1=0,a2=0,u,z,s;
    cin>>a;
    u=a%10;
    z=a/10%10;
    s=a/100;
    a1=u*100+s*10+z;
    a2=z*100+u*10+s;
    f(a);
    f(a1);
    f(a2);
    if(a==1 && a1==1 && a2==1)cout<<"DA";
    else cout<<"NU";
    return 0;
}
