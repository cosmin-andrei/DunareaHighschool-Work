#include <iostream>
#include <fstream>
using namespace std;

ofstream fout("bac.txt");

int main()
{

    for(int a=1; a<=9; a=a+2)
        for(int b=1; b<=9; b=b+2)
            for(int c=1; c<=9; c=c+2)
            {
                int n;
                n=a*100000+b*10000+c*1000+c*100+b*10+a;
                fout<<n<<" ";
            }

    return 0;
}
