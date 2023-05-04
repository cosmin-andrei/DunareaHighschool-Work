#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    char s1[30], s2[30];
    bool ok=true;
    int j=0;

    cin>>s1>>s2;

    for(int i=0; i<strlen(s1); i++)
        if(strchr(s2+j,s1[i])==0)
        {
            ok=false;
            break;
        }
        else j=strchr(s2+j,s1[i])-s2+1;


        if(ok==false)cout<<"NU";
        else cout<<"DA";


return 0;
}
