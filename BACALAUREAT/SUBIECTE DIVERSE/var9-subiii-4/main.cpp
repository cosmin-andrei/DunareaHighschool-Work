#include <iostream>
#include<fstream>
using namespace std;
ifstream f("bac.txt");
int main()
{
    long int n;
    int maxim=0;
    while(f>>n);
    if(n%100==0 && maxim<n) maxim = n;

    if(maxim!=999 && maxim!=998)cout<<"999 998";
    else if(maxim==998) cout<<"999 997";
    else cout<<"997 996";
    return 0;
}
