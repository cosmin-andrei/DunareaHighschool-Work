#include <iostream>
using namespace std;

int joc (int n)
{int contor=0,k;
for(k=2; k<=n; k++)
    if(n%k==0) contor++;
return contor;

}

int main()
{ cout<<joc(12);
    return 0;
}
