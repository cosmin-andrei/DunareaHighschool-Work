#include <iostream>

using namespace std;

int main()
{
    int n;
    cin>>n;

    int uc=n%10, pc=n/1000;

    n=pc*1000+800+90+uc;
    cout<<n;

    return 0;
}
