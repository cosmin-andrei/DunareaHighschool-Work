#include <iostream>
#include <string.h>
using namespace std;

char s[21];

int main()
{
    int p=1;
    cin>>s;
    for(int i=0; i<strlen(s); i++)
    {
        if(isdigit(s[i]))
        {
                int nr=0;
                while(isdigit(s[i]))
                {
                    nr=nr*10+s[i]-48;
                    i++;
                }
                p=p*nr;

        }

    }

        cout<<p;
        return 0;
    }
