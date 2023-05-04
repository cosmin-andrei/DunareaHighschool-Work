#include <iostream>
#include <fstream>

using namespace std;

void sterge(int v[100],int &n,int i)
{
    int j;
    for(j=i; j<n-1; j++)
        v[j]=v[j+1];
    n=n-1;
}

int main()
{

    int n,i,x,v[100];
    f>>n;

    for(i=0; i<n; i++)
    {
        f>>x;
        v[i]=x;
    }

    for(i=1; i<n; i++)
        if(v[i]==v[i-1])
            sterge(v,n,v[i]);


    for(i=0; i<n; i++)
        cout<<v[i]<<" ";

    return 0;
}
