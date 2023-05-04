#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    char s[101], sp[101], *p;
    cin.getline(s,101);

    int nrcuv=0;
    p=strtok(s," ");
    while(p)
    {
        strcpy(sp[nrcuv++],p);
        p=strotk(NULL," ");
    }

    for(int i=0; i<nrcuv; i++)
    {
        if(strlen(sp[i])%2==1)
        {

        }
    }
    return 0;
}
