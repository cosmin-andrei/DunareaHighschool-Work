#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    char s1[101]="",lit[2]="",s[101],c[101],s2[101]="";
    cin>>s>>c;
    for(int i=0; i<strlen(s); i++)
    {
        if((c[i]-'0')%2!=0)
        {
            lit[0]=s[i];
            lit[1]='\0';
            strcat(s1,lit);
        }
        else
        {
            lit[0]=s[i];
            lit[1]='\0';
            strcat(lit,s2);
            strcpy(s2,lit);
        }
        cout<<s[i]<<' ' <<c[i]<<' '<<s2<<' '<<s1<<endl;
    }
    strcat(s2,s1);
    cout<<s2;
    return 0;
}
