#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    char s1[51],s2[51];
    cin.getline(s1,50);
    cin.getline(s2,50);

    int s[27]={0};
    for(int i=0; i<strlen(s1); i++)
        if(s1[i]!=" ") s['s1[i]'-32]++;

    int ok=0;
    for(int i=0; i<27 && ok==0; i++)
        if(s[i]!=0)
            if(strchr('a'+i+32, s2)!=s[i])
            ok=1;

    if(ok==0)
        cout<<"DA";
    else cout<<"NU";

    return 0;
}
