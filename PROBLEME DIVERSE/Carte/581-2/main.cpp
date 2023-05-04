#include <iostream>

using namespace std;

int sub(int v[100], int n, int x)
{
    int k=0;
    for(int i=0; i<n; i++)
        if(v[i]<x)k++;
    return k;
}

int main()
{
    int v[100],i,n,kmax=0,nr;
    bool ok=true;
    cin>>n;
    for(i=0; i<n; i++)
        cin>>v[i];
    for(i=0; i<n-1; i++)
        for(int j=i+1; j<n; j++)
            if(sub(v,n,v[i])==sub(v,n,v[j]))
            {
                ok=false;
                break;
            }
    if(ok==true)cout<<"DA";
    else cout<<"NU";
    cout<<endl;
    for(i=0; i<n; i++)
        if(sub(v,n,v[i])==0)
        {
            cout<<v[i]<<endl;
            break;
        }
    for(i=0;i<n;i++)
    if(kmax<sub(v,n,v[i])){kmax=sub(v,n,v[i]);nr=v[i];}
    cout<<nr;
    return 0;
}
