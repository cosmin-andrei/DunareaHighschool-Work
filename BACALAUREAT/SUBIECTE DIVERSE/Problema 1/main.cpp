/*1.	Se dă un număr natural s cu cel mult 9 cifre. Afișați, în ordine lexicografică, toate modalitățile de a-l scrie pe s ca produs de divizori proprii distincți ai lui s.

Exemplu:
30 poate fi scris în următoarele moduri:
2 3 5
2 15
3 10
5 6
*/

#include <iostream>
#include <cmath>
using namespace std;

int D[401],X[401],n;
unsigned long s;

void afisare(int k)
{
    for(int i=1;i<=k;i++)
        cout<<D[X[i]]<<" ";
    cout<<"\n";
}

void back(int k, unsigned long pp)
{
    for(int i=X[k-1]+1;i<=n && pp*D[i]<=s;i++)
    {
        X[k]=i;
        pp=pp*D[X[k]];
        if(pp<=s)
            if(pp==s) afisare(k);
            else back(k+1,pp);
        pp=pp/D[X[k]];
    }
}

int main()
{
    cin>>s;
    for(unsigned long i=2;i*i<=s;i++)
        if(s%i==0)
        {
            D[++n]=i;
            if(i*i!=s)  D[++n]=s/i;
        }
    if(n==0) cout<<"NU EXISTA";
    else
    {
        sort(D+1,D+n+1);
        back(1,1);
    }
    return 0;
}
