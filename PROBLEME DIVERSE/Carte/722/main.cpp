#include <iostream>
using namespace std;
int x[100],n;
int ok(int k)
{
    for(int i=1; i<k; i++)
        if(x[k] == x[i])return 0;
    return 1;
}

int solutie(int k)
{
    return n == k;
}

void afisare()
{
    for(int i=1; i<=n; i++)
        cout<<x[i]<<" ";
    cout<<endl;
}

void Back(int k)
{
    for(int i=1; i<=n; i+2)
    {
        x[k]=i;
        if(ok(k))
            if(solutie(k))
                afisare();
            else Back(k+2);
    }
}

int main()
{
    cin>>n;
    int m=n;
    n=0;
    while(m)
    {
        n=n*10;
        m--;
    }
    Back(1);
    return 0;
}
