#include <iostream>
#include <fstream>
#include <cstring>
using namespace std;
ifstream f("date.in");
char s[501], *p;
char a[60];
int m;

void citire()
{
    f.getline(s,500);
    f>>m;

}

void solutie()
{
    p=strtok(s," ");
    while(p)
    {
        if(strlen(a)+strlen(p)<m) strcat(a,p);
        else
        {
            cout<<a<<endl;
            a[0]=0;
            strcpy(a,p);
        }
        strcat(a," ");
        p=strtok(NULL," ");

    }
    cout<<a;
}

int main()
{
    citire();
    solutie();
    return 0;
}
