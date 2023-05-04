#include <iostream>
#include <fstream>
using namespace std;

ifstream fin("bac.txt");

int main()
{
    int ok=0,nr;
    while(fin>>nr)
    {
        if(nr%2==0)
        {
            cout<<nr<<" ";
            ok=1;
        }
    }

    if(ok==0)
        cout<<"nu exista";
    return 0;
}
