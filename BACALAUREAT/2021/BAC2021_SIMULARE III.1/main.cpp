#include <iostream>
using namespace std;

int putere(int n)
{
   for(int d=2; d<=n; d++)
        if(n%d==0)
   {
       if((n/d)%d==0)
       {
           while(n%d==0)
            n=n/d;
       d++;
       }

   else return d;
   }
}

int main()
{
    int n;
    cin>>n;

    cout<<putere(n);
}
