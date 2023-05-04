#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    char s[101], sn[101], *p;
    int ok=0;
    cin.getline(s,100);

    p=strtok(s," ");

    while(p)
    {
        if(strlen(p)%2==0)
        {
            strcat(sn,"#");
            ok=1;
        }
        else strcat(sn,p);

        strcat(sn," ");
        p=strtok(NULL," ");
    }
    if(ok==1)
        for(int i=0; i<strlen(sn); i++)
            cout<<sn[i];
    else cout<<"nu exista";

    return 0;
}
