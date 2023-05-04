#include <iostream>
using namespace std;
int x[100],n,c[5];

int ok(int k)
{
    if(k>1 &&  x[k]%2!=x[k-1]%2)return 0;
    return 1;
}

int verificare(int k)
{
    return n==k;
}

void afisare()
{
    for(int i=1; i<=n; i++)
        cout<<x[i];
    cout<<endl;
}

void Back(int k)
{
    for(int i=1; i<=4; i++)
    {
        x[k]=c[i];
        if(ok(k))
        {
            if(verificare(k))
                afisare();
            else Back(k+1);
        }
    }

}

int main()
{
    cin>>n;
    cin>>c[1]>>c[2]>>c[3]>>c[4];
    Back(1);
    return 0;
}
