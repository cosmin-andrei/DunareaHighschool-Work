#include <iostream>
using namespace std;

int x[10],c[3],s;

void Afis(int k)
{
    for( int j=1; j<=k; j++)
        cout<<c[x[j]]<<" ";
    cout<<endl;
}

bool OK(int n, int k)
{
    if(k>1 && x[k]<x[k-1])
        return false;
    s=0;
    for(int i=1; i<=k; i++)
        s+=c[x[i]];

    if(s>n)
        return false;
    return true;
}

bool Solutie(int n, int k)
{
    s=0;
    for(int i=1; i<=k; i++)
        s+=c[x[i]];
    if(s==n)
        return true;
    else
        return false;
}

void Back(int n, int k)
{
    for(int i=1; i<=2; i++)
    {
        x[k]=i;
        if(OK(n,k))
        {
            if(Solutie(n,k))
                Afis(k);
            else
                Back(n,k+1);
        }

    }
}
int main()
{  int n;
    cin>>n;
    c[1]=3;
    c[2]=5;
    Back(n,1);
    return 0;
}
