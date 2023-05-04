#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    char s[101],*p;

    cin.getline(s,100);
    p=strtok(s," ");
    while(p)
    {
        if(strstr(p,"DO")) cout<<p<<endl;
        else if(strstr(p,"RE")) cout<<p<<endl;
        else if(strstr(p,"MI")) cout<<p<<endl;
        else if(strstr(p,"FA")) cout<<p<<endl;
        else if(strstr(p,"SOL")) cout<<p<<endl;
        else if(strstr(p,"LA")) cout<<p<<endl;
        else if(strstr(p,"SI")) cout<<p<<endl;

        p=strtok(NULL," ");
    }


    return 0;
}
