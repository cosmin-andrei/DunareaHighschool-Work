#include <iostream>

using namespace std;

int main()
{
    int x;
    cin>>x;

    int a,b,c;
    cin>>a>>b>>c;

    if(a%x==0)
        cout<<a<<" multiplu a lui "<<x;

    if(b%x==0)
        cout<<b<<" multiplu a lui "<<x;

    if(c%x==0)
        cout<<c<<" multiplu a lui "<<x;

    return 0;
}
