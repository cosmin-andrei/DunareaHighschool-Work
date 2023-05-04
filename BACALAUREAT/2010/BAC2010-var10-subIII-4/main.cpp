#include <iostream>
#include <fstream>
using namespace std;

ifstream f("bac.txt");
int main()
{
    int n, ant=-1;
    while(f>>n)
        if(n%2==0 && n!=ant)
        {
            cout<<n<<" ";
            ant=n;
        }

    return 0;
}
