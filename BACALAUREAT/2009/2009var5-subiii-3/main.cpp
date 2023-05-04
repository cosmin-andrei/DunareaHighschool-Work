#include <iostream>

using namespace std;
ofstream g("nr.txt");
int main()
{
    long int n;
    cin>>n;
    while(n>0)
    {
        g<<n%10;
        n/=10;
    }

    return 0;
}
