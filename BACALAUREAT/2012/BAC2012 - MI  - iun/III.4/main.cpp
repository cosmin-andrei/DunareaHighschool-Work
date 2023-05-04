#include <iostream>
using namespace std;

void dublu(int& n, int v[100])
{
    for(int i=0; i<n; i++)
        if(v[i]>0)
            {
                n++;
                for(int j=n-1; j>i; j--)
                    v[j]=v[j-1];
                i++;
                v[i]=v[i-1];
            }
}

int main()
{
    int v[100],n;
    cin>>n;

    for(int i=0; i<n; i++)
        cin>>v[i];

    dublu(n,v);

    for(int i=0; i<n; i++)
        cout<<v[i]<<" ";
    return 0;
}
