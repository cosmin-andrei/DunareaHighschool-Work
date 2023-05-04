#include <iostream>

using namespace std;

int main()
{
    int n;
    cin>>n;

    ///var1
    cout<<(n*(n+1))/2;

    cout<<endl;

    ///var2;
    int s=0;
    for(int k=1; k<=n; k++)
        s+=k;
    cout<<s;

    return 0;
}
