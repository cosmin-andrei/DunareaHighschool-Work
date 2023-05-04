#include <iostream>

using namespace std;

int prim (int x)
{
    for(int d=2; d<=x/2; d++)
        if(x%d==0)return 0;
    return 1;
}

int main()
{
    int n,k;
    cin>>n;
    while(k<=n)
    {
        int i=3,j=i+2;
        if(prim(i)==1 && prim(j)==1)cout<<"("<<i<<","<<j<<")"<<" ";
        i++;
    }

    return 0;
}
