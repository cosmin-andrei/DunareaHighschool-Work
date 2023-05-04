#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    char s[101];
    cin>>s;

    int k=0;
    bool ok=true;

    for(int i=0; i<strlen(s); i++)
    {
        if(s[i]=='i')
            k++;

        if(strchr("aeou",s[i]))
        {
            ok=false;
            break;
        }
    }

    if(ok && k!=strlen(s))
        cout<<"DA";
    else cout<<"NU"

    return 0;
}
