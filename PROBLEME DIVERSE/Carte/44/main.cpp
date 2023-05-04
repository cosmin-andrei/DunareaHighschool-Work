#include <iostream>
#include <fstream>
#include <cstring>
using namespace std;
ifstream in("date.in");

int x[21],n;

struct jucator
{
    char nume[21];
    char pozitie[21];
} v[21];

void Afis()
{
    int m=0,a=0,p=0,ap=0;
    for(int j=1; j<=11; j++)
    {
        if(strcmp(v[x[j]].pozitie,"portar")==0) p++;
        if(strcmp(v[x[j]].pozitie,"aparator")==0) ap++;
        if(strcmp(v[x[j]].pozitie,"atacant")==0) a++;
        if(strcmp(v[x[j]].pozitie,"mijlocas")==0) m++;
    }
   // cout<<p<<" "<<ap<<" "<<a<<" "<<m<<endl;
if(p==1 && ap>=2 && a>=2 && m>=2)
    {for( int j=1; j<=11; j++)
        cout<<v[x[j]].nume<<" ";
    cout<<endl;}
}

bool OK(int k)
{
    for(int i=1; i<k; ++i)
       {
           if(x[k]==x[i])
            return false;
            if(strcmp(v[x[k]].pozitie,"portar")==0 && strcmp(v[x[i]].pozitie,"portar")==0)
                return false;
       }
    return true;
}

bool Solutie(int k)
{
    return k == 11;
}

void Back(int k)
{
    for(int i=1 ; i<=n ; ++i)
    {
        x[k]=i;
        if( OK(k) )
            if(Solutie(k))
                Afis();
            else
                Back(k+1);
    }
}
int main()
{
    in>>n;
    for(int i=1; i<=n; i++)
        in>>v[i].nume>>v[i].pozitie;
    Back(1);
    return 0;
}
