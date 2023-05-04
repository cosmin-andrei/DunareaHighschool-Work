#include <iostream>
#include <fstream>
using namespace std;
ifstream c("bac.txt");
int main()
{
    int n, maxim=0, m=0, p=1;
    while(c>>n)
    {
        if(n>maxim)
        {
            cout<<n<<" ";
            maxim=n;
            p=1;
        }
        else if(n == maxim && maxim == m && p==1)
            cout<<n<<" ";
        else p=0;
        m=n;
    }
    return 0;
}
