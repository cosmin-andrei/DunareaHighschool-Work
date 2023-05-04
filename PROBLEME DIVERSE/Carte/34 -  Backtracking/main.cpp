#include <iostream>
#include <cstring>
using namespace std;
int x[100],n;
char s[21];

int ok(int k)
{
    for(int i=1; i<k; i++)
    {
        if(x[k]==x[i])return 0;
    }

    if(k>=2)
    {if(strchr("aeiouAEIOU",s[x[k]])!=0 && strchr("aeiouAEIOU",s[x[k-1]])!=0) return 0;
    if(strchr("aeiouAEIOU",s[x[k]])==0 && strchr("aeiouAEIOU",s[x[k-1]])==0) return 0;}
    return 1;
}

int verificare(int k)
{
    return n==k;
}

void afisare()
{
    for(int i=1; i<=n; i++)
        cout<<s[x[i]];
    cout<<endl;
}

void Back(int k)
{
    for(int i=0; i<n; i++)
    {
        x[k]=i;
        if(ok(k))
        {
            if(verificare(k))
                afisare();
            else Back(k+1);
        }
    }

}

int main()
{
    cin.getline(s,21);
    n=strlen(s);
    Back(1);
    return 0;
}
