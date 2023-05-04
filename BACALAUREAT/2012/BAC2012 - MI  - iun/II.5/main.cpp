#include <iostream>
#include <string.h>
using namespace std;

int main()
{
    int na,nb;
    char a[21],b[21],c[21];

    cin>>a>>b;
    na=strlen(a);
    nb=strlen(b);

    int k=na-1;
    while(k>=0)
    {
        strcpy(c,a+k);
        if(strcmp(b,strstr(b,c))==0)
            cout<<c<<" ";
        k--;
    }

    return 0;
}
