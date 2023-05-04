#include <iostream>
#include <fstream>
using namespace std;
ofstream fout("BAC.TXT");

int main()
{
    for(int c=1; c<=7; c++)
    {
        int nr=c;
        for(int i=c+2; i<=9; i+=2)
            {nr=nr*10+i;
            fout<<nr<<endl;
            }

    }

}
