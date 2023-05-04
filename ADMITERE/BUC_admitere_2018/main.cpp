#include <iostream>
#include <fstream>
#include <cstring>
using namespace std;

ifstream fin("bac.txt");

int A[100][10000];

int main()
{
    int L,k=0;
    fin>>L;

    fin.get();
    char s[10001],*p;
    fin.getline(s,10000);

    ///a
    p=strtok(s," ");
    while(p)
    {
        if(k+strlen(p)>L)
        {
            cout<<endl;
            k=0;
        }

        if(k==0)cout<<p;
        else cout<<" "<<p;

        k=k+strlen(p)+1;
        p=strtok(NULL," ");
    }

    cout<<endl;

    ///b
    int N;
    fin>>N>>L;
    char c[N+1][L+1];

    for(int i=1; i<=N; i++)
    {
        fin.get();
        fin.get(c[i],L+1);
        for(int j=strlen(c[i]); j<=L; j++)
            c[i][j]='*';

    }

    int ok=0;
    for(int i=1; i<N && ok==0; i++)
        for(int j=2; j<L && ok==0; j++)
            if(c[i][j]==' ' && (c[i+1][j]==' ' || c[i+1][j-1]==' '  || c[i+1][j+1]==' '))
                ok=1;

    if(ok==1)cout<<"DA";
    else cout<<"NU";

    cout<<endl;

    ///c

    int maxim=0;
    for(int i=1; i<=N; i++)
        for(int j=1; j<L; j++)
            if(c[i][j]==' ')
                A[i][j]=1+max(A[i-1][j],max(A[i-1][j],A[i-1][j+1]));

    for(int i=1; i<=N; i++)
        for(int j=1; j<L; j++)
            if(maxim<A[i][j])
                maxim=A[i][j];

    cout<<maxim;


    fin.close();
    return 0;
}
