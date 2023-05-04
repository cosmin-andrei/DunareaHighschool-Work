#include <iostream>

using namespace std;

int x[100], n,p;
int ok(int k)
{
    for(int i=1; i<k; i++)
        if(x[i]==x[k])return 0;
    if(k>1 && x[k]<x[k-1])return 0;
    return 1;
}

int solutie (int k)
{
    return k==p;
}

void afisare(int k)
{
    for(int i=1; i<=k; i++)
    cout<<x[i]<<" ";
    cout<<endl;
}

void Back(int k)
{
    for(int i=1; i<=n; i++)
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
    cin>>n>>p;
    Back(1);
    return 0;

}
