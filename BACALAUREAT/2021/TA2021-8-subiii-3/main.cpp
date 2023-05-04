#include <iostream>
#include <fstream>
using namespace std;

ifstream f("bac.txt");
int a,b,x;

int main()
{
    while(f>>x)
        if(x%2!=0)
            if(a==0)
                a=x;
            else if(b==0)
                b=x;
            else
            {
                a=b;
                b=x;
            }
    if(a%b==0) cout<<"NU EXISTA";
    else cout<<a<<" "<<b;
    f.close();
    return 0;
}
