#include <iostream>
using namespace std;
int n,x[10],m,A[10];

int ok(int k)
{
    if(k>=2 && x[k]<=x[k-1])return 0;
    return 1;
}

int solutie(int k)
{
    return m==k;
}

void afisare(int k)
{
    for(int i=1; i<=k; i++)
        cout<<A[x[i]]<<" ";
    cout<<endl;
}

int Back(int k)
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
    cin>>n>>m;
    for(int i=1; i<=n; i++)
        cin>>A[i];
    Back(1);
}
