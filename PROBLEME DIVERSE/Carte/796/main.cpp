#include <iostream>
#include <fstream>
using namespace std;
ifstream f("date.in");
int main()
{
    int n,m,A[10],B[10],X[10];
    f>>m>>n;
    for(int i=1; i<=m; i++)
        f>>A[i];
    for(int i=1; i<=n; i++)
        f>>B[i];

    for(int i=1; i<m; i++)
        for(int j=i+1; j<=m; j++)
            if(A[i]>A[j]) swap(A[i],A[j]);

    for(int i=1; i<n; i++)
        for(int j=i+1; j<=n; j++)
            if(B[i]>B[j]) swap(B[i],B[j]);

    int i=1,s=0;
    while(A[i]<0 && i<=m)
    {
        X[i]=B[i];
        i++;

    }
    int j=n;
    i=m;
    while(A[i]>=0 && i>=1)
    {
        X[i]=B[j];
        i--;
        j--;

    }

    for(i=1; i<m; i++)
    {
        cout<<A[i]<<"*"<<X[i]<<"+";
        s=s+(X[i]*A[i]);
    }
    cout<<A[m]<<"*"<<X[m];
    s=s+(X[m]*A[m]);
    cout<<"="<<s;


    return 0;
}
