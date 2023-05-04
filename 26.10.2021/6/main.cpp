#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int n,k,c;
    cin>>n>>k>>c;

    int nr,l=pow(10,k);
    nr=n/(l/10);
    nr=nr*l+c*(l/10)+n%(l/10);


    cout<<nr;


    return 0;
}
