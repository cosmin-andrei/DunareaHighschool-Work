#include <iostream>

using namespace std;
void cifra(long int &a, int b)
{
    long int nr=0;
    while(a)
    {
        if(a/b!=0)nr=nr*10+a%10;
        a=a/10;
    }
    while(nr)
    {
        a=a*10+nr%10;
        nr=nr/10;
    }

}

int main()
{int i,a,v[100],n;
cin>>n;
for(i=0;i<n;i++)
    cin>>v[i];


    return 0;
}
