#include <iostream>
using namespace std;
int x[100],n,sol;

int solutie(int k)
{
    return n==k;
}

void afisare(int k)
{
    for(int i=1; i<=k; i++)
    { if(x[i]==1)cout<<"*";
     else cout<<".";
     if(i==3 || i==6 || i==9) cout<<endl;}
     cout<<endl;
     sol++;

}

void Back(int k)
{
    for(int i=1; i<3; i++)
    {
        x[k]=i;
    if(solutie(k))
                afisare(k);
        else Back(k+1);

    }
}

int main()
{
    n=9;
    Back(1);
    cout<<sol;
    return 0;
}
