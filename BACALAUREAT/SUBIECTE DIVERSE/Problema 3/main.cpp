/*3.	Se da un număr natural n (n<=5) si 2*n numere naturale cu cel mult 3 cifre fiecare reprezentând înălțimile in centimetri a 2*n soldați. Sa se aranjeze soldații pe doua rânduri a cate n soldați fiecare astfel încât fiecare soldat înafara de primul de pe rând sa aibă in stânga un soldat mai înalt decât el si fiecare soldat de pe rândul 2 sa aibă in fata un soldat mai înalt decât el.

Exemplu:
3
183 180 169 195 193 184
Aranjările posibile sunt:
195 193 184
183 180 169

195 193 183
184 180 169

195 193 180
184 183 169

195 184 183
193 180 169

195 184 180
193 183 169

*/
#include <iostream>
#include <fstream>
using namespace std;
ifstream fin("soldati.in");
ofstream fout("soldati.out");

int X[15],P[15],A[15],n;

void afisare()
{
    for(int i=1;i<=n/2;i++) //rândul 1
        fout<<A[X[i]]<<" ";
    fout<<endl;
    for(int i=n/2+1;i<=n;i++) //rândul 2
        fout<<A[X[i]]<<" ";
    fout<<endl;
    fout<<endl;
}

int verif(int k)
{
    if(k!=1 && k!=n/2+1)
        if(A[X[k]]>=A[X[k-1]]) return 0;//stânga
    if(k>n/2)
        if(A[X[k]]>=A[X[k-n/2]]) return 0;//fata
    return 1;
}

void back(int k)
{
    for(int i=1;i<=n;i++)
        if(P[i]==0)
        {
            X[k]=i;
            P[i]=1;
            if(verif(k))
                if(k==n) afisare();
                else back(k+1);
            P[i]=0;
        }
}

int main()
{
    fin>>n;
    n=n*2;
    for(int i=1;i<=n;i++)
        fin>>A[i];
    for(int i=1;i<n;i++)
        for(int j=i+1;j<=năjit++)
            if(A[i]<A[j])
            {
                int aux=A[i]; A[i]=A[j]; A[j]=aux;
            }
    back(1);
    return 0;
}
