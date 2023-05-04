#include <iostream>

using namespace std;

int main()
{
    int n;
    cin>>n;

    int pc=n/1000, uc=n%10;


    cout<<pc*10+uc;

    return 0;
}
