#include <iostream>
#include <cstring>
using namespace std;

char cuv[4][15]= {"COLEGIUL","LICEUL","NATIONAL","TEORETIC"},t[50],s[80],*p,sep[]=" ";
int poz,i,n,k;

int main()
{
    cin.getline(t,50);
    p=strtok(t,sep);

    while (p)
    {
        n=strlen(p);
        if (p[n-1]!='.') strcat(s,p);
        else
        {
            p[n-1]='\0';
            for (k=0; k<4; ++k)
            {
                if (strstr(cuv[k],p))
                {
                    strcat(s,cuv[k]);
                    break;
                }
            }
        }
        p=strtok(NULL, sep);
        if(p) strcat(s, " ");
    }

    cout <<s<<endl;

}
