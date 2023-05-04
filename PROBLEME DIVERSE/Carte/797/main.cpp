#include <iostream>
#include <cstring>
using namespace std;
int v[330],poz[30];
char s[30];
int main()
{
    char cuv[30];
    cin>>cuv;
    int c;
    for(int i=0; i<strlen(cuv); i++)
    for(c='a'; c<='z'; c++)
        if(cuv[i]==c) v[c]++;
    int nr=0;
    for(c='a'; c<='z'; c++)
    {
        if(v[c]>0)
        {
            s[nr]=c;
            poz[nr]=v[c];
            nr++;
        }
    }

    for(int i=0; i<nr-1; i++)
        for(int j=i+1; j<nr; j++)
            if(poz[i]<poz[j])
            {
                swap(poz[i],poz[j]);
                swap(s[i],s[j]);
            }

    int val[10],r=nr;
    for(int i=0; i<nr; i++)
    {
        val[i]=r;
       r--;
    }


    for(int i=0; i<strlen(cuv); i++)
        for(int j=0; j<nr; j++)
        if(s[j]==cuv[i]) cout<<val[j]<<" ";


            return 0;
}
