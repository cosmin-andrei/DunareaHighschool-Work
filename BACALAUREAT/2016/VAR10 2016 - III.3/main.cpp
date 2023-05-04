#include <iostream>
using namespace std;

int cifreImpare(int n)
{
int nr=0;
while(n)
{
    if(n%10%2==0)
        nr=n%10*10+nr;

    n=n/10;
}

if(nr==0)
    return -1;


}

int main()
{
    cout << "Hello world!" << endl;
    return 0;
}
