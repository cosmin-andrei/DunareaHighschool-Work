#include <iostream>
#include <fstream>
using namespace std;

ifstream fin("bac.txt");

int main()
{
    int x, nr1, nr2, n1=0, n2=0;

    fin>>x>>nr1;

    while(fin>>nr2)
    {
        if(nr1%1000==x && nr2%1000==x)
        {
            n2=nr2;
            n1=nr1;
        }

        nr1=nr2;
    }

    if(n2==0) cout<<"nu exista";
    else cout<<n1<<" "<<n2;

    return 0;
}
