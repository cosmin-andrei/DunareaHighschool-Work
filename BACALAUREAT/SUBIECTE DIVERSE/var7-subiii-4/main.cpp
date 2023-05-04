#include <iostream>

using namespace std;
int sub(long int n)
{
    if(n<=5) return sub(n);
    else return sub(2*(n-1));
}

int suma(long int n)
{
    int c=0;
    while(sub(c)<=n)
    {
        c++;
    }
    return sub(c-1);
}
int main()
{
    long int s;
    cin>>s;
    while(s)
    {
        cout<<suma(s)<<" ";
        s-=suma(s);
    }
    return 0;
}
