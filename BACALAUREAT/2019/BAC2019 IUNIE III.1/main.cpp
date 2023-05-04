#include <iostream>
using namespace std;


void Impare(int &n)
{

    int n1, p = 1;

    while(n>0)
    {
        int nd=n%10;
        if(n%2==1)nd--;

        n1=nd*p+n1;
        p=p*10;
        n=n/10;
    }

    n = n1;
}


int main()
{

    int n;

    cin >> n;
    Impare(n);

    cout << n << endl;

    return 0;
}
