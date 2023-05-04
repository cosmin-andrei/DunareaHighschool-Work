#include <iostream>
#include <fstream>
using namespace std;
ofstream fout("BAC.TXT");

/*
int palindrom(int n)
{
    int nr=0;
    while(n)
    {
        nr=nr*10+n%10;
        n=n/10;
    }
    return nr;
}

int main()
{
    int n=100001;
    while(n<1000000)
        {
            if(n==palindrom(n))fout<<n<<endl;
            n++;
        }

    return 0;
}
*/

int main()
{
    for(int c1=1; c1<=9; c1++)
        for(int c2=0; c2<=9; c2++)
    {
        int nr=c1*10000000+c1*1000000+c2*100000+c2*10000+c2*1000+c2*100+c1*10+c1;
        fout<<nr<<endl;
    }
}
