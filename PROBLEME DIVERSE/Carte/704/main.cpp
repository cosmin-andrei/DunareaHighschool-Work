#include <iostream>
using namespace std;
int x[10],n,p;

struct persoane
{
    char nume[30], sex[10];
}s[10];

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
    for(int i=1; i<=n; i++)
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
    for(int i=1; i<=n; i++)
        cin>>s[i].nume>>s[i].sex;
    Back(1);
    return 0;
}
