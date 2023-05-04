#include <iostream>
#include <fstream>
using namespace std;

ifstream f("bac.txt");

int main()
{
    int x,nr,ant,n1,n2;
    f>>x>>ant;

    int ok=0;
    while(f>>nr)
    {
        if(nr%1000==x && ant%1000==x)
        {
            n1=ant;
            n2=nr;
            ok=1;
        }

        ant=nr;
    }

    if(ok==0) cout<<"nu exista";
    else cout<<n1<<" "<<n2;

    return 0;
}
