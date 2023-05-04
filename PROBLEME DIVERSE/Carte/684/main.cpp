#include <iostream>
using namespace std;

int x[10],n,v[10],d=1;

void atribuire()
{
    int n1=n;
    while(n1)
    {
        v[d++]++;
        n1/=10;
    }

}

int ok(int k)
{
    for(int i=1; i<k; ++i)
        if(x[k]==x[i])
            return 0;
    return 1;
}

int solutie(int k)
{
    return k == d;
}

void afisare()
{
    for( int j=1; j<=d; j++)
        cout<<x[j];
    cout<<endl;
}

void Back(int k)
{
    for(int i=1; i<=d ; i++)
    {
        x[k]=v[i];
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
    atribuire();
    Back(1);

    return 0;
}
