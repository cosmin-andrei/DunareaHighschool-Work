#include <iostream>
#include <fstream>
using namespace std;
ifstream in("date.in");
int x[100],n,p,f,t,a[100][100];

int ok(int k)
{
    for(int i=1; i<k; i++)
    {
        if(x[k]==x[i])return 0;
        if(a[x[i]][x[k]]==1) return 0;
    }
    return 1;
}

int verificare(int k)
{
    return n==k;
}

void afisare()
{
    for(int i=1; i<=n; i++)
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
            if(verificare(k))
                afisare();
            else Back(k+1);
        }
    }

}

int main()
{
    in>>n;
    in>>p;
    for(int i=1; i<=p; i++)
    {
        in>>f>>t;
        a[f][t]=1;
    }
    Back(1);
    return 0;
}
