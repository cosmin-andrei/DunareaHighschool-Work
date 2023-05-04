#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    char s[101],*p;
    int k=0, ok=1;

    cin.getline(s,100);

    p=strtok(s," ");
    while(p)
    {
        int oki=1;
        for(int i=0; i<strlen(p); i++)
            if(isdigit(p[i])==0)oki=0;

        if(oki==1 && k!=0 && k!=strlen(p))
            ok=0;
        else if(oki==1 && k==0)
            k=strlen(p);

            p=strtok(NULL," ");
    }

    if(ok==1)cout<<k;
    else cout<<"NU";

    return 0;
}
