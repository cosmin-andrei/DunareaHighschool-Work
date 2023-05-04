#include <iostream>
#include <fstream>
using namespace std;
ifstream f("bac.txt");
int main()
{
    long int n, nr=0,k=0;
    while(f>>n)
    {
        if(nr!=n)
        {
            cout<<n<<" "<<k<<" ";
            nr=n; k==0;
        }
        else if (n==nr) k++;
    }
}
