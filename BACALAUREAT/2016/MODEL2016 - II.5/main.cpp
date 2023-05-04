#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    char s[100];
    cin.getline(s,99);

    for(int i=0; i<strlen(s); i++)
    {
        if(strchr("bcdfghjklnpqrstvwxyz",s[i]))
        {

            strcpy(s+i,s+i+1);
            i--;

        }


    }


    cout<<s;

    return 0;
}
