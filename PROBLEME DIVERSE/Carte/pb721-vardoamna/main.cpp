#include <iostream>
using namespace std;
int m,n,x[100];

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

    for(int i=1; i<=k; i++)
        cout<<x[i];
    if(m%2==0) for(int i=k; i>=1; i--)
            cout<<x[i];
    else
        for(int i=k-1; i>=1; i--)
            cout<<x[i];
    cout<<endl;
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
    m=n;
    if(n%2==0) n=n/2;
    else n=n/2+1;
    Back(1);
}
