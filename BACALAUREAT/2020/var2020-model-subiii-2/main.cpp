#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    char s[101],*p,s1[100]="\0";
    int n;
    cin.get(s,100);
    cin>>n;
    p= strtok(s," ");
    while(p)
    {
        if(strlen(p)>=n)cout<<p<<endl;
        else
        {
            strcat(s1,p);
            strcat(s1," ");
        }
        p=strtok(NULL," ");
    }

    p=strtok(s1," ");
    while(p)
    {
        cout<<p<<endl;
        p=strtok(NULL," ");
    }
    return 0;
}
