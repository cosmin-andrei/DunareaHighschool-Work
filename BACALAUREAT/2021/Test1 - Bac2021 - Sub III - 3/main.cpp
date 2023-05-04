#include <iostream>
#include <fstream>
using namespace std;
ifstream f("bac.in");
int main()
{
    int n,m1=0,m2=0,v[100]={0};
    while(f>>n)
    {
        if(n<100 && n>9) v[n]++;

    }
    int k=0;
    for(n=99; n>=10 && k<=2; n--)
    {
        if(n%10 != n/10)
            if(v[n]==0 && m1==0){m1=n; k++;}
            else if(v[n]==0 && m2==0) {m2=n; k++;}

    }
    if(k<2) cout<<"nu exista";
    else cout<<m1<<" "<<m2;

    return 0;
}
