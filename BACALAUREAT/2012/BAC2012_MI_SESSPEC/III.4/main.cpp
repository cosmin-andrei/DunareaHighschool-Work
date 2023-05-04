#include <iostream>
#include <fstream>
using namespace std;

ifstream fin("bac.txt");

int main()
{
    int n, maxim1=0, maxim2=0; ///n par
    fin>>n;
    int nr,nr1;

    for(int i=1; i<=n/2; i++)
    {

        fin>>nr;
        if(nr>maxim1)
        {
            maxim2=maxim1;
            maxim1=nr;
        }
    }

    fin>>nr1;
       if(maxim1<nr1)cout<<maxim1;
    else if(maxim2<nr1 && maxim2!=0) cout<<maxim2;
    else cout<<"nu exista";


    return 0;
}
