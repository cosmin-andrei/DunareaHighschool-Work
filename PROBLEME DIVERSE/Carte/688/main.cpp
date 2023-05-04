#include <iostream>
using namespace std;
int x[100],n,v[100];

int ok(int k)
{
    for(int i=1; i<k; i++)
        if(x[i]==x[k])return 0;

    if(k!=n+1 && k>=2 && v[x[k]]<v[x[k-1]])return 0;
    if(k>=n+1)
        if(v[x[k]]<v[x[k-n]])return 0;
    return 1;
}

int solutie(int k)
{
    return 2*n==k;
}

void afisare(int k)
{
    for(int i=1; i<=k; i++)
    {
        cout<<v[x[i]]<<"-"<<x[i]<<"   ";
        if(i%n==0)cout<<endl;
    }
    cout<<endl;
}

void Back(int k)
{
    for(int i=1; i<=2*n; i++)
    {
        x[k]=i;
        if(ok(k))
            if(solutie(k))
                afisare(k);
            else Back(k+1);
    }
}

int main()
{
    cin>>n;
    for(int i=1; i<=2*n; i++)
        cin>>v[i];
    Back(1);
    return 0;
}
