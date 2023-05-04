#include <iostream>
#include <cmath>
#include <fstream>
using namespace std;
ifstream f("bac.txt");
bool patrat(int n)
{
    if((int)sqrt(n) == sqrt(n))
        return true;
    return false;
}
int main()
{
    int n,s=0;
    f>>n;
    while(f>>n)
    {
        if(patrat(n)==true)
        {
            cout<<n<<"+";
            s+=n;
        }
    }
    cout<<"="<<s;
        return 0;
}
