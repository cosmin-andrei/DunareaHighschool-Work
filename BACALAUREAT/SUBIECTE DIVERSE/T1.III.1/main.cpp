#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    char s[101],*p;
    cin.getline(s,100);

    int i=1,maxim=0;
    while(i<strlen(s))
    {
        int k=0;
        while(s[i]!='#')
        {
            i++;
            k++;
        }

        if(maxim<k)
            maxim=k;

        i++;
        k=0;

    }

    p=strtok(s,"#");
    while(p)
    {
        if(strlen(p)==maxim)
            strrev(p);

        cout<<"#"<<p;
        p=strtok(NULL,"#");
    }
    cout<<"#";
    return 0;
}
