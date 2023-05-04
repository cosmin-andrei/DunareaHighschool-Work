#include <iostream>
using namespace std;
int x[10];
int solutie (int k)
{
    int nr=0;
    for(int i=1; i<=k; i++)
        if(x[i]==0)nr++;
    return 5==k && nr==3;
}

void afisare(int k)
{
    cout<<"074";
    for(int i=1; i<=k; i++)
        cout<<x[i];
    cout<<"65";
    cout<<endl;
}

void Back(int k)
{
    for(int i=0; i<=9; i++)
    {
        x[k]=i;
        if(solutie(k))
            afisare(k);
        else if(k<5)
                Back(k+1);
    }
}
int main()
{
    Back(1);
}
