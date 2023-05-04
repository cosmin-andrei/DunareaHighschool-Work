#include <iostream>

using namespace std;

int cifra(long int a, int b)
{
    int k=0;
    while(a)
    {
        if(a%10==b)k++;
        a=a/10;
    }
    return k;
}

int main()
{
    int a,i,ok=1;
    cin>>a;
    for(i=0; i<=9; i++)
        if(cifra(a,i)!=0)
        {
            ok=0;
            break;
        }
    if(ok==0)cout<<"NU";
    else cout<<"DA";
    cout<<endl;

    for(i=9; i>=0; i--)
        if(cifra(a,i)>0)
        {
            cout<<i<<endl;
            break;
        }
    int nr=0;
    for(i=9; i>0; i--)
        if(cifra(a,i)>0)
        {
            int k=cifra(a,i);
            while(k)
            {
                nr=nr*10+i;
                k--;
            }

        }
    cout<<nr<<endl;
    ok=1;
    for(i=1; i<=9; i+=2)
        if(cifra(a,i)>0)
        {
            ok=0;
            break;
        }
    if(ok==0)cout<<"DA";
    else cout<<"NU";
    cout<<endl;
    int a1=a;
    i=0;
    while(a1)
    {
        i++;
        a1=a1/10;
    }
    if(cifra(a,a%10)==i)cout<<"DA";
    else cout<<"NU";

}
