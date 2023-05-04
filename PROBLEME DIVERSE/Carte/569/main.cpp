#include <iostream>

using namespace std;
int putere(long int a, long int b)
{
    int c;
    c=a/b;
    c=c-1*b;
    return c;
}
int main()
{
    int a,b;
    cin>>a>>b;
    cout<<putere(a,b);

    return 0;
}
