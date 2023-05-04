#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    char s[101],*p;
    int n,ok=0;
    cin.get(s,100);
    cin>>n;
    p=strtok(s," ");
    while(p)
    {
        if(strlen(p)==n)
        {
            ok=1;
            cout<<p<<endl;
        }
        p=strtok(NULL," ");
    }
    if(ok==0)cout<<"nu exista";
}
