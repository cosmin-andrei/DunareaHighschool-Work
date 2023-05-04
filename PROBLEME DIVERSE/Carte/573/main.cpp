#include <iostream>

using namespace std;
ifstream f("date.in");
ifstream g("numere.in")
int prim (int x)
{
    for(int d=2; d<=x/2; d++)
        if(x%d==0)return 0;
    return 1;
}
int main()
{
    int i,v[100],n,a[20][30],j;
    cin>>n;
    for(i=0; i<n; i++)
        cin>>v[i]
           for(i=0; i<n; i++)
               if(prim(v[i])==1)cout<<v[i]<<" ";
    cout<<endl;

    for(i=0; i<20; i++)
        for(j=0; j<30; j++)
            cin>>a[i][j];
    for(i=0; i<20; i++)
        for(j=0; j<30; j++)
            if(prim(a[i][j])==1)cout<<a[i][j]<<" ";
    cout<<endl;

    while(f>>n)
        if(prim(n)==1)cout<<n<<" ";
    cout<<endl;

    int k=0,r;
    while(g>>n)
    {
        if(prim(n)==1 && k=0)cout<<n<<" ";
        else g=n;
    }
    cout<<g<<endl;

    cin>>n;
    for(i=2; i<=n; i++)
        if(prim(i)==1)cout<<i<<" ";
    cout<<endl;

    int x;
    cin>>x;
    for(i=x; i>0; i++)
        if(prim(i)==1)
        {
            cout<<i<<endl;
            break;
        }



}
