#include <iostream>
#include <fstream>
using namespace std;

ofstream fout("bac.txt");

int main()
{
    int x;
    cin>>x;
    fout<<x<<" ";

    while(x>1)
    {
        int y;
        if(x%2!=0)
            y=(x+1)/2;
        else
            y=x-1;

        fout << y << " ";
        x=y;

    }

    fout.close();
    return 0;
}
