#include <iostream>
#include <cstring>
using namespace std;
int main()
{
    bool ok=false;
    char s[101],*p;
    cin.get(s,100);
    p=strtok(s," ");
      while(p)
    {
        int c=0,v=0;
        for(int i=0; i<strlen(p); i++)
            if(strchr("aeiou",p[i]))v++;
            else c++;
        if(v<c)
        {
            cout<<p<<endl;
            ok=true;
        }
        p=strtok(NULL," ");
    }
    if(ok==false)cout<<"nu exista";
    return 0;
}
