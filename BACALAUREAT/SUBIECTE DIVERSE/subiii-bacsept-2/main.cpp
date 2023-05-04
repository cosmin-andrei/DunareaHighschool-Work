#include <iostream>
#include <string.h>
using namespace std;
int main()
{
    char s[101],*p;
    cin.get(s,100);
    p=strtok(s," ")
      while(p)
    {
        if(strlen(p)%2!=0)strrev(p);
        p=strtok(NULL," ");
    }
    cout<<s;
    return 0;
}
