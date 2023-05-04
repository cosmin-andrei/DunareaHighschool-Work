#include <iostream>

using namespace std;

int main()
{
    cout << "sa se determina sufixul format din ultimele k cifre ale lui x" << endl;
    int x,k;
    cin>>x>>k;

    double p;
    p=pow(10,k);
    cout<<x%(int)p;

    return 0;
}
