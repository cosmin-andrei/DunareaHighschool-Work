#include <iostream>
#include <fstream>
using namespace std;
ifstream f("graf.txt");
int m,n,a[30][30];

int main()
{
    int x,y;
    f>>n>>m;
    while(f>>x>>y)
        a[x][y]=a[y][x]=1;
//a
    for(int i=1; i<=n; i++)
    {
        for(int j=1; j<=n; j++)
            cout<<a[i][j]<<" ";
        cout<<endl;
    }
//b
    int nod,k=0;
    cin>>nod;
    for(int j=1; j<=n; j++)
        if(a[nod][j]==1)k++;
    cout<<k<<endl;
//c
    nod=0;
    cin>>nod;
    for(int j=1; j<=n; j++)
        if(a[nod][j]==1)cout<<j<<" ";
    cout<<endl;
//d
    int d[30];
    for(int i=1; i<=n; i++)
    {
        d[i]=0;
        for(int j=1; j<=n; j++)
            if(a[i][j]==1)d[i]++;
        cout<<"d("<<i<<")="<<d[i]<<endl;
    }
//e
    int maxi=0,ok=0;
    for(int i=1; i<=n; i++)
    {
        maxi=max(maxi,d[i]);
        if(d[i]!=n-1)ok=1;
    }
    if(ok==0)cout<<"graf complet";
    else cout<<"graful nu este complet";
    cout<<endl<<"noduri cu grad maxim:";
    for(int i=1; i<n; i++)
        if(maxi==d[i])cout<<i<<" ";
    cout<<endl;
//f
    cout<<"noduri izolate:";
    k=0;
    for(int i=1; i<=n; i++)
        if(d[i]==0){cout<<i<<" "; k++;}
    cout<<endl;
//g
if(k%2==0)cout<<k/2;
else cout<<k/2+1;

//h
int l,p[30];
cin>>l;
for(int i=1; i<=l; i++)
    cin>>p[i];
ok=1;
for(int i=1; i<l; i++)
    if(a[p[i]][p[i+1]]==0)ok=0;
if(ok==0)cout<<"nu este lant";
else cout<<"este lant";




    return 0;
}
