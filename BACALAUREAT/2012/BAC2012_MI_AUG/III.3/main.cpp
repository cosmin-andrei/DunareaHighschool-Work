#include <iostream>
using namespace std;

void zero(int n, int v[])
{
    for(int i=1; i<2*n; i++)
        if(i%2==0 && v[i]%2!=0)
        {
            int aux=v[i];
            v[i]=v[i-1];
            v[i-1]=aux;
            i++;
        }

}

int main()
{
    int n, v[50];
    cin>>n;

    for(int i=1; i<2*n; i++)
        cin>>v[i];

    zero(n,v);

    for(int i=1; i<2*n; i++)
        cout<<v[i]<<" ";

    return 0;
}
