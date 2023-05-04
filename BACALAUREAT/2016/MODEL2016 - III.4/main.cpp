#include <iostream>
#include <fstream>
using namespace std;

ifstream fin("date.in");

int main()
{
    int nr, pmax=999999999, pmin=-1, ok=1;
    while(fin>>nr && ok==1)
    {
        if(nr%2==0 && pmin>nr)ok=0;
        else if(nr%2==0) pmin=nr;
        else if(pmax<nr)ok=0;
        else pmax=nr;
    }

    if(ok==1)
        cout<<"DA";
    else cout<<"NU";
    return 0;
}
