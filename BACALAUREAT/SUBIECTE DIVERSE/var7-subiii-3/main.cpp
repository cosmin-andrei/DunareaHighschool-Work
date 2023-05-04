#include <iostream>

using namespace std;

int main()
{
    int n,i;
    cin>>n;
    int v[300], v1,v3;
    for(i=0; i<n*3; i++)
        cin>>v[i];

    int poz=-1;
    for(i=0; i<n; i++)
        if(v[i]%2==0)
        {
            v1=v[i];
            poz=i;
            break;
        }
    int poz3=-1;
    for(i=(3*n)-1; i>=2*n; i--)
        if(v[i]%2!=0)
        {
            v3=v[i];
            poz3=i;
            break;
        }

    if(poz!=-1 && poz3!=-1)
    {
        v[poz]=v3;
        v[poz3]=v1;

    }

    for(i=0; i<n*3; i++)
        cout<<v[i]<<" ";
}

