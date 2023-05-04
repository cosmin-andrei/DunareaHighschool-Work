#include <iostream>
#include <fstream>
using namespace std;

ifstream f("admitere.in");

int main()
{
    int a,b,c,n,v[100];

    f>>a>>b>>c>>n;
    for(int i=0; i<n; i++)
        f>>v[i];

    for(int i=0; i<n-1; i++)
        for(int j=i+1; j<n; j++)
            if(a*v[i]*v[i]+b*v[j]*v[j]==c)
            {
                cout<<"("<<v[i]<<","<<v[j]<<")"<<" ";
                cout<<"("<<v[j]<<","<<v[i]<<")"<<" ";
            }

    cout<<endl;
    int st=0, dr=n-1, k=0;
    while(st<dr)
    {
        int E=a*v[st]*v[st]+b*v[dr]*v[dr];
        if(E==c)
            {k+=2;
            dr--;
            st++;}
        else if (E<c) st++;
        else dr--;
    }

    cout<<k;

    return 0;
}
