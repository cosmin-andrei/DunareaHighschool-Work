#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    char s[101],cuv[4],*p;
    cin.getline(s,101);

    int poz=1;
    p=strtok(s," ");
    while(p)
    {
        if(poz==1)
        {
            int c=0;
            for(int i=0; i<strlen(p); i++)
                if(strchr("aeiou",p[i])==NULL)
            {
                cuv[0]=p[i];
                c=1;
            }

            if(c==0)
                cout<<"nu exista";
                else poz++;
        }

        else if (poz==2)
        {
            int v=0;
             for(int i=0; i<strlen(p) && v==0; i++)
                if(strchr("aeiou",p[i])!=NULL)
            {
                cuv[1]=p[i];
                v=1;
            }

            if(v==0) cout<<"nu exista";
            else poz++;
        }

        cuv[2]=p[strlen(p)-1];
    p=strtok(NULL," ");
    }

    cuv[3]='\0';
    cout<<cuv;

    return 0;
}
