#include <iostream>
#include <cstring>
using namespace std;
/*char s1[101];
int main()
{
    char s[101],*p;
    cin.get(s,100);
    p=strtok(s," ");
    while(p)
    {
        if(p[0]!='-')strcat(s1,p);
        strcat(s1," ");
        p=strtok(NULL," ");
    }
    cout<<s1;

    return 0;
}*/
int main()
{
    char s[101];
    cin.get(s,100);
    for(int p=0; p<strlen(s); p++)
        if(strchr(s,'-'))
            if(s[p]!=' ')
                strcpy(s+p,s+p+1);
    cout<<s;
    return 0;
}

