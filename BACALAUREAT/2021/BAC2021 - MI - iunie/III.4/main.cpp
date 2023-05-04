#include <iostream>
#include <fstream>
using namespace std;

ofstream g("bac.txt");

int main()
{
    int s1,s2;
    do
    {
        cin>>s1;
    }
    while(s1<=0 || s1>18);

    do
    {
        cin>>s2;
    }
    while(s2<=0 || s2>18);

    for(int i=10000; i<100000; i++)
        if((i%10)+(i/10)%10==s2 && (i/1000)%10+(i/10000)==s1)
            g<<i<<endl;

    g.close();

    return 0;

}
