

#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    char s[101],*p,nr[101];
    cin.getline(s,101);

    int maxim=0;

    p=strtok(s," ");
    while(p)
    {
        if(isdigit(p[0]))
        {
            if(maxim<p[0])
                {maxim=p[0];
                strcpy(nr,p);
                }
        }

        p=strtok(NULL," ");
    }

    cout<<nr;

    return 0;
}
