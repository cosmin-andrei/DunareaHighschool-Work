#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    char c[21], s[201], q[201], *p;
    int c_aparitii=0, l_max=0;

    cin.getline(c,20);
    cin.getline(s,200);

    p=strtok(s,".");

    while(p)
    {
        char t[201],*l;
        strcpy(t,p);
        l=strtok(t," ");
        while(l)
        {
            if(strcmp(l,c)==0)
                c_aparitii++;

                l=strtok(NULL," ");
        }

        if(l_max<c_aparitii)
        {
            l_max=c_aparitii;
            strcpy(q,p);
        }

        p=strtok(NULL,".");
    }

    strcat(q,".");
    cout<<q;

    return 0;
}
