#include <iostream>
using namespace std;
int x[100],n;
int ok(int k)
{int k1=0,k2=0;
    for(int i=1; i<=k; i++)
       if(x[i]==1)k1++;
       else k2++;
       if(k1<k2 || k1>n)return 0;
    return 1;
}
int solutie(int k)
{
    return 2*n==k;
}

void afisare(int k)
{
    for(int i=1; i<=k; i++)
        if(x[i]==1)cout<<"(";
        else cout<<")";
    cout<<endl;
}

void Back(int k)
{
    for(int i=1; i<=2; i++)
    {
        x [k] = i;
        if(ok(k) == 1)
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
