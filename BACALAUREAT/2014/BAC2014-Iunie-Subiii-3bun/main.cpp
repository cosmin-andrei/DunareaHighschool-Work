#include <iostream>
using namespace std;

int interval(int n, int &a, int &b)
{
    a=1;
    for(int i=1; i<=n-1; i++)
        a=a*i;
    b=a*n*(n+1)-1;
    a=a+1;
}

int main()
{
    int a,b;
    interval(3,a,b);
    cout<<"["<<a<<","<<b<<"]";
    return 0;
}
