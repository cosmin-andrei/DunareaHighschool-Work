#include <iostream>
using namespace std;

int Suma(int n)
{
    int s=0;
    while(n)
    {
        if(n%10==n/10%10)
            s=s+(n%10*10+n%10);

        n=n/10;
    }

    return s;
}

int main()
{
    cout << Suma(722722555) << endl;
    return 0;
}
