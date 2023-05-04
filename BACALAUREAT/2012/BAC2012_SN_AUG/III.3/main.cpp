#include <iostream>

using namespace std;

int main()
{
    int n, v[100];
    cin>>n;

    for(int i=1; i<=2*n; i++)
        cin>>v[i];

    for(int i=1; i<2*n; i++)
    {
        int aux = v[i];
        v[i]=v[i+1];
        v[i+1]=aux;
        i++;
    }

    for(int i=1; i<=2*n; i++)
        cout<<v[i]<<" ";

    return 0;
}
