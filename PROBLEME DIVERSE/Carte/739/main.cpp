#include <iostream>
#include <cmath>
using namespace std;
int x[10],n;

int ok(int k)
{   if(abs(x[k]-x[k-1])!=1)return 0;
    if(k==n-1 && abs(x[n]-x[n-1])!=1) return 0;
    return 1;
}

int solutie(int k)
{
    return n-1 == k;
}

void afisare()
{
    for(int i=1; i<=n; i++)
        cout<<x[i]<<" ";
    cout<<endl;
}

int Back(int k)
{
    for(int i=0; i<=n; i++)
    {
        x[k]=i;
        if(ok(k))
            if(solutie(k))
                afisare();
            else Back(k+1);
    }
}

int main()
{
    cin>>n;
    x[1]=1;x[n]=1;
    Back(2);
}
