#include <iostream>
using namespace std;
int x[100],n;

int ok(int k)
{
    int j=0;
    for(int i=1; i<k; i++)
        if(x[i]==x[k])j++;
    if(x[1]==0 || j>1)return 0;
    else return 1;
}

int solutie (int k)
{
    return n==k;
}

void afisare(int k)
{
    for(int i=1; i<=k; i++)
        cout<<x[i]<<" ";
    cout<<endl;
}

void Back(int k)
{
    for(int i=0; i<10; i++)
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
