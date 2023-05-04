#include <iostream>
#include <cstring>
using namespace std;
int n,p,sir;
char x[10];
int ok(int k)
{   if(k>=3)
        if(strchr("aeiou",x[k])==0 && strchr("aeiou",x[k-1])==0 && strchr("aeiou",x[k-2])==0) return 0;
        else if(strchr("aeiou",x[k])!=0 && strchr("aeiou",x[k-1])!=0 && strchr("aeiou",x[k-2])!=0) return 0;
    return 1;
}

int solutie (int k)
{
    return k==p;
}

void afisare(int k)
{
    for(int i=1; i<=k; i++)
        cout<<x[i];
    cout<<" "; sir++;
}

int Back(int k)
{
    for(int i='a'; i<='z'; i++)
    {
        x[k]=i;
        if(ok(k))
            if(solutie(k) && n>sir)
                afisare(k);
            else Back(k+1);
    }
}

int main()
{
    cin>>n>>p;
    Back(0);
}
