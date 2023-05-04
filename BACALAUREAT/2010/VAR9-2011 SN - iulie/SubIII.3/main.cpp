/*

Scrieti un program C/C++ care citeşte de la tastatură un număr natural n (2≤n≤20) şi un
şir de n numere naturale, fiecare cu cel mult 4 cifre, dintre care cel puŃin unul este număr
par, construieşte în memorie un tablou unidimensional care să conŃină termenii şirului citit
şi apoi modifică tabloul, inserând după fiecare termen par al şirului numărul 2011.
Programul afişează pe ecran numărul de elemente ale tabloului şi, pe o linie nouă a
ecranului, valorile memorate în tablou, separate prin câte un spaŃiu.
Exemplu: dacă n=7, iar şirul este 1,4,5,3,82,6,2 atunci pe ecran se afişează
11
1 4 2011 5 3 82 2011 6 2011 2 2011

*/

#include <iostream>
using namespace std;

int main()
{
    int n, v[20];
    cin>>n;

    for(int i=0; i<n; i++)
        cin>>v[i];

    for(int i=0; i<n; i++)
        if(v[i]%2==0)
    {
        n++;
        for(int j=n-1; j>i+1; j--)
        {
            v[j]=v[j-1];
        }
        v[i+1]=2011;
        i++;
    }

    for(int i=0; i<n; i++)
        cout<<v[i]<<" ";

    return 0;
}
