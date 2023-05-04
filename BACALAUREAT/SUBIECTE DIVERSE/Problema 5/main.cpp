/*5.	Se citesc numerele naturale n,a,b,p,q (n<=20, a<=b<=n, p<=q) si apoi n punctaje diferite ale unor întrebări. Sa se afișeze toate modurile in care se poate alege pentru un test un număr de întrebări cuprins intre a si b si care sa aibă punctajul total intre p si q.

Exemplu:
7 4 5 20 25
6
5
7
8
2
3
10
se vor afișa
6 5 7 2
6 5 7 2 3
6 5 7 3
6 5 8 2
6 5 8 2 3
....
8 2 3 10

*/

#include <iostream>
#include <fstream>
using namespace std;
ifstream fin("i.in");
ofstream fout("i.out");

int X[21],Q[21],n,a,b,p,q;

void afisare(int k)
{
    for(int i=1;i<=k;i++)
        fout<<Q[X[i]]<<" ";
    fout<<endl;
}

void back(int k, int pp)
{
    for(int i=X[k-1]+1;i<=n;i++)
        {
            X[k]=i;
            pp=pp+Q[X[k]];
            if(pp<=q)
            {
                if(k>=a && k<=b && pp>=p) afisare(k);
                back(k+1,pp);
            }
            pp=pp-Q[X[k]];
        }
}

int main()
{
    fin>>n>>a>>b>>p>>q;
    for(int i=1;i<=n;i++)
        fin>>Q[i];
    back(1,0);
    return 0;
}
