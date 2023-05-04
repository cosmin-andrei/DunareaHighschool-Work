#include <iostream>
using namespace std;

int x[10],n,p;

int gasit(int y)
{
    for(int i=1; i<=p; i++)
        if(x[i]==y) return 1;

    return 0;
}

int solutie(int k)
{
    return k==p;
}

void afisare()
{
    int ok=1;
    for(int i=1; i<=n; i++)
        if(gasit(i)==0)ok=0;
    if(ok==1)
    {
        for (int i=1; i<=p; i++)
            cout<<x[i]<<" ";
        cout<<endl;
    }
}

int Back(int k)
{
    for(int i=1; i<=n; i++)
    {
        x[k]=i;
        if(solutie(k))
            afisare();
        else Back(k+1);
    }
}

int main()
{
    cin>>n>>p;
    Back(1);

    return 0;
}

