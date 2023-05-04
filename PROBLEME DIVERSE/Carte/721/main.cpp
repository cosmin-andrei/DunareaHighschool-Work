#include <iostream>
using namespace std;

int x[10000],n;

bool palindrom (int k)
{
    int aux=x[k],invers=0;
    while(aux)
    {
        invers=invers*10+aux%10;
        aux/=10;
    }
    if(invers==x[k])return true;
    else return false;

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
    return k == n;
}

void afisare()
{
    for( int j=1; j<=n; j++)
        cout<<x[j]<<" ";
    cout<<endl;
}

void Back(int k)
{
    for(int i=n ; i<n*10 ; ++i)
    {
        x[k]=i;
        if(ok(k))
            if(solutie(k) && palindrom(k)==true)
                afisare();
            else
                Back(k+1);
    }
}
int main()
{
    cin>>n;
    Back(1);
    return 0;
}
