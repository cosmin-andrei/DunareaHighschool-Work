#include <iostream>
using namespace std;

void divX(int n, int x)
{
    while(n)
    {
        cout<<x*n<<" ";
        n--;
    }
}

int main()
{
    divX(4,15);
    return 0;
}
