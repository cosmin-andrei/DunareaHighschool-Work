#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    cout<<log10(1000)<<" "<<log10(5000)<<" "<<log10(9999)<<endl;
    int x;
    cin >> x;
    cout<<(int)log10(x)+1;


    return 0;
}
