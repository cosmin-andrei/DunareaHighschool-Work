#include <iostream>
using namespace std;

int x[10],n,v[10];

void atribuire()
{
    for(int i=1; i<=n; i++)
        v[i]=i;
}

int ok(int k)
{
    for(int i=1; i<k; ++i)
        if(x[k]==x[i] || x[k]==x[k+1])
            return 0;
    return 1;
}

int solutie(int k)
{
    return k == n;
}

void afisare()
{
    for( int j=1; j<=n; j++)
        cout<<x[j]<<" ";
    cout<<endl;
}

void Back(int k)
{
    for(int i=1 ; i<=n ; ++i)
    {
        x[k]=i;
        if(ok(k))
            if(solutie(k))
                afisare();
            else
                Back(k+1);
    }
}
int main()
{
    cin>>n;
    Back(1);
    atribuire();
    return 0;
}
