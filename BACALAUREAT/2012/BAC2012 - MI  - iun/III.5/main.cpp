#include <iostream>
#include <fstream>
using namespace std;

ofstream g("BAC.TXT");
int main()
{
    int x;
    cin>>x;

    for(int p=1; p<=9-x; p++)
    {
        int n=p;
        int c=p+x;
        while(c<=9)
        {
            n=n*10+c;
            g<<n<<endl;
            c+=x;
        }

    }

    return 0;
}
