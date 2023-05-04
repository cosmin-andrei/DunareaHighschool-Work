#include <iostream>
#include <fstream>
using namespace std;
ifstream f("bac.txt");
int A[100][100], n, B[100][100],x[100],t[100],d[100],v[100];
int T()
{
    for(int p=2; p<=n; p++)
    {
        int k=0;
        for(int i=1; i<=p; i++)
            for(int j=1; j<=p; j++)
                if(A[i][j]!=0)k++;
        if(k!=(2*p-2))return 0;
    }

    for(int i=1; i<=n; i++)
    {
        int nr;
        for(int j=1; j<=n; j++)
            if(A[i][j]!=0)
            {
                nr=A[i][j];
                break;
            }
        for(int j=1; j<=i; j++)
        {
            if((A[i][j]==A[j][i] && A[i][j]!=0) && (A[i][j]!=A[j][i]+1)) return 0;
            if(A[i][j]!=0 && A[i][j]!=nr) return 0;
        }
    }

    return 1;

}

void bf()
{
    int st,dr,j,k=1;
    st=dr=1;
    x[1]=k;
    v[k]=1;
    d[k]=0;

    while(st<=dr)
    {
        for(j=1; j<=n; j++)
            if(B[x[st]][j]==1 && v[j]==0)
            {
                dr++;
                x[dr]=j;
                v[j]=1;
                d[j]=d[x[st]]+1;
                t[j]=x[st];
            }
        st++;
    }
}

void lant(int k)
{
    if(t[k]!=0) lant(t[k]);
    cout<<k<<" ";
}

void afis()
{
    int i,maxim=0,vf;
    for(i=1; i<=n; i++)
        if(d[i]>maxim)
        {
            maxim=d[i];
            vf=i;
        }

    lant(vf);
}

int main()
{
    f>>n;
    for(int i=1; i<=n; i++)
        for(int j=1; j<=n; j++)
            f>>A[i][j];

    cout<<T()<<endl;

    if(T()==1)
    {

        for(int i=1; i<=n; i++)
            for(int j=1; j<=i; j++)
                if(A[i][j]==A[j][i]+1) B[i][j]=B[j][i]=1;

        bf();
        afis();

    }

    return 0;
}
