#include <iostream>

using namespace std;
void pnumar(int nr,int &s)
{
    s=0;
    for(int d=1; d<=nr; d++)
        if(nr%d==0)s=s+d;
}

int kpn(int a,int b, int k)
{int s1,nr;
bool ok=false;
for(nr=a;nr<=b;nr++)
if(pnumar(nr,s1)==nr)ok=true;
if(ok==true)return s1;
else return -1;
int main()
{
    cout << "Hello world!" << endl;
    return 0;
}
