#include <iostream>

using namespace std;

int main()
{
    int n,m,c;
    cin>>n;
    m = 0;
    do
    {
        c=n%10;
        n = n/10;
        if(c<5) m = m - 2* c;
        else m = m + c;
    }
    while(n != 0);
    if(m == 0) cout<<"DA";
    else cout<<m<<"NU";
}

/* pseudocod

citeste n
m <- 0
cat timp n != 0 executa
c <- n%10; n <-[n/10]
daca c<5 atunci m <- m-2*c
altfel m<-m+c

daca m = 0 atunci scrie DA
altfel scrie m, NU

*/
