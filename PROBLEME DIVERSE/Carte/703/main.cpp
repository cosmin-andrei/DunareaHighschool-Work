#include <iostream>
using namespace std;

int x[10],n,m,A[10];

int ok(int k)
{
    for(int i=1; i<k; ++i)
        if(x[k]==x[i])
            return 0;
    return 1;
}

int solutie(int k)
{
    return k == m;
}

void afisare()
{
    for( int j=1; j<=m; j++)
        cout<<x[j]<<" ";
    cout<<endl;
}

void Back(int k)
{
    for(int i=1 ; i<n ; ++i)
    {
        x[k]=A[i];
        if(ok(k))
            if(solutie(k))
                afisare();
            else
                Back(k+1);
    }
}
int main()
{
    cin>>n>>m;
    for(int i=0;i<n;i++)
        cin>>A[i];
    Back(1);
    return 0;
}
