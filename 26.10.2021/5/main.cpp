#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int n,k;
    cin>>n>>k;

    int nr,l=pow(10,k);
    nr=n/l;
    nr=nr*(l/10)+n%(l/10);


    cout<<nr;

    return 0;
}
