#include <iostream>

using namespace std;

int numarare(int n, int m, int a[], int b[])
{
    int k=0;
    for(int i=0; i<n; i++)
    {
        int ok=1;
        for(int j=0; j<m; j++)
        if(a[i]>=b[j])
            ok=0;
        if(ok==1)
        k++;}

        return k;
}


int main()
{
    int a[]={1,4,5,3,82,6,2},b[]={56,6,34,23,8,9,12,18};
    cout<<numarare(7,8,a,b);
    return 0;
}
