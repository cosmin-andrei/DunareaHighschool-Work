#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    char s[101],*p,voc[]="aeiou";
    int k=0,c;
    cin.getline(s,100);
    p=strtok(s," ")
    while(p)
    {
        c=0;
        for(int i=0; i<=4;i++)
            if(strchr(p,voc[i])!=NULL) c++;
        if(c==1)
        {
            k++;
            cout<<p<<endl;
        }
        p=strtok(NULL," ");
        }
    }

     if(k==0) cout<<"NU EXISTA";
    return 0;
}
