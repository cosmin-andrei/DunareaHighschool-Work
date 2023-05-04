#include <iostream>
#include <string.h>
using namespace std;
int x[100],n;
char s[9];
int ok(int k)
{
    for(int i=0; i<k; i++)
        if(x[i]==x[k])return 0;
    if(k>1)
        if(strchr("aeiouAEIOU",s[x[k]])==0 && strchr("aeiouAEIOU",s[x[k-1]])==0
                && strchr("aeiouAEIOU",s[x[k-2]])==0) return 0;

    return 1;
}

int solutie(int k)
{
    return k==n-1;
}

void afisare(int k)
{
    for(int i=0; i<n; i++)
        cout<<s[x[i]]<<" ";
    cout<<endl;
}

void Back(int k)
{
    for(int i=0; i<n; i++)
    {
        x[k]=i;
        if(ok(k))
        {
            if(solutie(k))
                afisare(k);
            else Back(k+1);
        }
    }
}

int main()
{
    cin>>s;
    n=strlen(s);
    Back(0);
    return 0;
}
