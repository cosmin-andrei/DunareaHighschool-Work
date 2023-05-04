#include <iostream>
using namespace std;
int n,x[100];

int ok(int k)
{
    if(k==1&&x[k]==0) return 0;
    return 1;
}

int solutie(int k)
{
    return n==k;
}

void afisare(int k)
{
    int ok=1;
    for(int i=1; i<=k; i++)
        if(x[i]!=x[k-i+1]) ok=0;
    if(ok)
    {
        for(int i=1; i<=k; i++)
            cout<<x[i];
        cout<<endl;
    }
}

int Back(int k)
{
    for(int i=0; i<=9; i++)
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
    Back(1);
}

