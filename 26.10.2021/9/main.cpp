#include <iostream>

using namespace std;

int main()
{
    int a,b,c,d,a1,c1;
    cin>>a>>b;
    cin>>c>>d;

    if(b!=d)
    {
        a1=a*d;
        c1=c*d;
    }

    if(a1>c1) cout<<a<<"/"<<b;
    else if(a1<c1) cout<<c<<"/"<<d;
    else cout<<"sunt egale";

    return 0;
}
