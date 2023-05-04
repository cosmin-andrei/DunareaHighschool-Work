#include <iostream>

using namespace std;
int suma(int n, int v[100])
{int s=0,i;
for(i=0;i<n;i++)
s=s+v[i];
return s;
}
int main()
{int n,v[100],i;
cin>>n;
for(i=0;i<n;i++)
cin>>v[i];
while(n)
{cout<<suma(n,v)<<endl;
n--;
}
    return 0;
}
