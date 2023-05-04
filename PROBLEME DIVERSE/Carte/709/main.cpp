#include <iostream>
using namespace std;

int x[10],n;

int solutie(int k)
{
    return n==k;
}

void afisare()
{
    for (int i=1; i<=n; i++)
       if(x[i]!=0) cout<<i<<" ";
    cout<<endl;
}

int Back(int k)
{
    for(int i=0; i<=1; i++)
    {
        x[k]=i;
            if(solutie(k))
            afisare();
        else Back(k+1);
    }
}

int main()
{
    cin>>n;
    Back(1);

    return 0;
}
