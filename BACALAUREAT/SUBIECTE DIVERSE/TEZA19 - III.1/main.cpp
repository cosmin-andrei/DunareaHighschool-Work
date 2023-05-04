#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    char s1[41], s2[41], s3[81], vc[41], p=0;

    cin.getline(s1,40);
    cin.getline(s2,40);

    for(int i=0; i<strlen(s1); i++)
        if(strchr("aeiou",s1[i]))
        {

            strcpy(s3,s2+p);
            s2[p]=s1[i];
            s2[p+1]=NULL;
            strcat(s2,s3);
            strcpy(s1+i,s1+i+1);
            i--;
            p=p+2;
        }

    cout<<s1<<endl<<s2;

    return 0;
}
