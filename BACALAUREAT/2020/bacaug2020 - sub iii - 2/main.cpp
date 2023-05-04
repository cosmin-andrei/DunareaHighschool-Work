#include <iostream>
#include <cstring>
using namespace std;

int main()
{char s[101],*p,s1[101];
int k=0;
cin.getline(s,100);
p=strtok(s," ");
while(p)
{
    if(strlen(p)%2!=0)
    {strcat(s1,strrev(p));
    k=1;}
    else strcat(s1,p);
    strcat(s1," ");
    p=strtok(NULL," ");
}
if(k==1) cout<<s1;
else cout<<"nu exista";
    return 0;
}
