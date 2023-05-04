/*4.	Se citesc din fișierul fazan.in numerele naturale n, si m (n<=15, m<=n) si apoi n cuvinte distincte cu cel mult 10 litere fiecare. Să se afișeze toate secvențe de cate m cuvinte dintre cele citite care sa respecte condițiile jocului "fazan".

Exemplu:
fazan.in
8 3
paul alina asfalt nas ultim imagine nasture real
fazan.out
paul ultim imagine
alina nas asfalt
alina nasture real
nasture real alina
real alina nas
real alina nasture*/

#include <iostream>
#include <fstream>
#include <cstring>
using namespace std;
ifstream fin("fazan.in");
ofstream fout("fazan.out");

char C[16][11];
int X[16],P[16],n,m;

void afisare()
{
    for(int i=1;i<=n;i++)
        fout<<C[X[i]]<<" ";
    fout<<'\n';
}

int fazan(char x[], char y[])
{
    if(x[strlen(x)-2]==y[0] &&
       x[strlen(x)-1]==y[1]) return 1;
    return 0;
}

void back(int k)
{
    for(int i=1;i<=n;i++)
        if(!P[i])
        {
            X[k]=i;
            P[i]=1;
            if(k==1 || fazan(C[X[k-1]],C[X[k]]))
                if(k==m) afisare();
                else back(k+1);
            P[i]=0;
        }
}

int main()
{
    fin>>n>>m;
    for(int i=1;i<=n;i++)
        fin>>C[i];
    back(1);
    return 0;
}
