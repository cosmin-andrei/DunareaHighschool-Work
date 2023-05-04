#include <iostream>

using namespace std;

int cif(long int a, int b)
{
    int k=0;
    while(a)
    {
        if(a%10==b)k++;
        a/=10;
    }
    return k;
}
int main()
{
    long int n;
    cin>>n;
    int k=0,cifra;
    for(int c=0; c<=9; c++)
    {
        if(cif(n,c)%2!=0)
        {
            k++;
            cifra=c;
        }
        if(k>1)cout<<0;
        else
        {
            int n1=0;
            for(c=9; c>=0; c--)
                for(int i=1; i<=cif(n,c)/2; i++)
                    n1=n1*10+c;
            if(k==1)n1=n1*10+cifra;
            for(c=0; c<=9; c++)
                for(int i=1; i<=cif(n,c)/2; i++)
                    n1=n1*10+c;
            cout<<n1;
        }

    }
    return 0;
}
