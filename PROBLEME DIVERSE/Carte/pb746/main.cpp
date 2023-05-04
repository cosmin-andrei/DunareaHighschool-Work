#include <iostream>
using namespace std;
int n,x[100];
int ok(int k)
{   if(x[k]<x[k-1] && k>=2)return 0;
    int s=0;
          for(int i=1; i<=k; i++)
              s=s+x[i];
    if(s>n) return 0;
    return 1;
}

int solutie (int k)
{
    int s=0;
          for(int i=1; i<=k; i++)
              s=s+x[i];
    return n==s;
}

void afisare(int k)
{
    for(int i=1; i<=k; i++)
        cout<<x[i]<<" ";
    cout<<endl;
}

int Back(int k)
{
    for(int i=1; i<=n; i++)
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
    Back(1);
}
