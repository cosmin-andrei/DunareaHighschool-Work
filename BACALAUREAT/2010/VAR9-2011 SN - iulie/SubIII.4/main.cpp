#include <iostream>
#include <fstream>
using namespace std;

ofstream g("bac.txt");

int main()
{
    int s1,s2,i,j;
    cin>>s1>>s2;

    for (i=10; i<100; i++)
    {
        if (i%10+i/10==s1)
        {
            if (s2<10)
                g<<i<<"0"<<s2<<endl;
            for (j=10; j<100 ; j++)
            {
                if (j%10+j/10==s2)
                    g<<i<<j<<endl;
            }
        }
    }
    return 0;
}
