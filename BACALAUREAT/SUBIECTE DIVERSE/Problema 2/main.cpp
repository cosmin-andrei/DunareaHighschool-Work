/*2.	Se citește un cuvânt format din maxim 10 litere mici distincte. Afișați in ordine lexicografica toate anagramele cuvântului citit care au proprietatea ca nu conțin doua vocale alaturate si nici doua consoane alăturate (practic vocalele si consoanele trebuie sa alterneze).
Daca acest lucru nu este posibil se va afișa mesajul IMPOSIBIL.

Exemplu:
Daca s="cosmina"
anagramele vor fi:
caminos
camison
camonis
...
sonimac
Daca s="cosmin" se va afișa IMPOSIBIL

*/

#include <iostream>
#include <cstring>
#include <cstdlib>
using namespace std;
int n,X[12],P[12];
char s[12];

void afisare()
{
    for(int i=1;i<=n;i++)
        cout<<s[X[i]-1];
    cout<<endl;
}

int valid(int k)
{
    if(k>1) //daca sunt cel puțin la cea de-a doua litera
    {
        if(strchr("aeiou",s[X[k]-1])==0 &&
           strchr("aeiou",s[X[k-1]-1])==0)
            return 0; //doua consoane alaturare => 0
        if(strchr("aeiou",s[X[k]-1])!=0 &&
           strchr("aeiou",s[X[k-1]-1])!=0)
            return 0; //doua vocale alaturate => 0
    }
    return 1;
}

void back(int k)
{
    for(int i=1;i<=n;i++)
        if(!P[i])
        {
            P[i]=1;
            X[k]=i;
            if(valid(k))
                if(k==n) afisare();
                else back(k+1);
            P[i]=0;
        }
}

void ordonare(char s[])
{
    int l=strlen(s);
    for(int i=0;i<l;i++)
        for(int j=i+1;j<l;j++)
            if(s[i]>s[j])
            {
                char aux=s[i];
                s[i]=s[j];
                s[j]=aux;
            }
}

int main()
{
    cin>>s;
    n=strlen(s);
    int cv=0,cc=0;
    for(int i=0;i<n;i++)
        if(strchr("aeiou",s[i])==0) cc++;//număram consoanele
        else cv++;//număram vocalele
    if(abs(cc-cv)>1) cout<<"IMPOSIBIL";//diferența>1 => imposibil
    else
    {
        ordonare(s);//ordonez alfabetic cuvântul
        back(1);
    }
    return 0;
}
