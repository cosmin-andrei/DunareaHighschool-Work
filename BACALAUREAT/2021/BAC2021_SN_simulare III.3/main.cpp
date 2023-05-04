#include <iostream>

using namespace std;

int main()
{
    int n, v[20], k;

    cin>>n;
    for(int i=0; i<n; i++)
        cin>>v[i];

    cin>>k;

    k--;

    int aux=v[k];

    for(int i=k; i>=1; i--)
    {
        v[i]=v[i-1];
    }

    v[0]=aux;

    for(int i=0; i<n; i++)
        cout<<v[i]<<" ";



    return 0;
}
