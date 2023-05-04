#include <iostream>
#include <fstream>
using namespace std;

ifstream fin("bac.in");

int main()
{
    int n,m,a,b,k=1,x,xa;
    fin>>n>>m;

    fin>>a;
    for(int i=2; i<=n; i++)
        fin>>b;

    int ok=0;
    fin>>xa;

    while(fin>>x && ok==0)
    {
        k++;
        if(xa<a && x>b)
        {
            cout<<k;
            ok=1;
        }
        else xa=x;
    }

    if(ok==0)
        cout<<"imposibil";


}
