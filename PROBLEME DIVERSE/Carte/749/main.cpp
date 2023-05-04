#include <iostream>
#include <cmath>
using namespace std;
int s[10],p,x;

int ok(int k)
{   int suma=0;
    if(s[k]==0 && k==1)return 0;
    for(int i=1; i<=k; i++)
        suma=suma+s[i];
        return suma<=x;
}

int solutie(int k)
{int suma=0;
    for(int i=1; i<=k; i++)
        suma=suma+s[i];
        return suma==x;

}

void afisare()
{
    for(int i=1; i<=p; i++)
        cout<<s[i];
    cout<<endl;
}

int Back(int k)
{
    for(int i=0; i<=9; i++)
    {
        s[k]=i;
        if(ok(k))
            if(solutie(k))
                afisare();
            else if(k<p) Back(k+1);
    }
}

int main()
{
    cin>>p>>x;
    Back(1);
}
