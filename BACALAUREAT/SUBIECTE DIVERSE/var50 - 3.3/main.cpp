#include <iostream>
using namespace std;

int divxy(int x, int y)
{
    if(x%y==0 || y%x==0) return 1;
    return 0;
}

int main()
{   int a, b, n;
    cin >> a >> b >> n;

    if(a>b) swap(a,b);

    for(int i=a; i<=b; i++)
        if(n>=i && divxy(i,n)==1)cout<<i<<" ";

    return 0;
}
