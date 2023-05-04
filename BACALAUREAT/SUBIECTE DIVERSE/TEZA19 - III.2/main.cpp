#include <iostream>

using namespace std;

void factor(int n, int a[], int &fp, int &p)
{
    int x=a[0];

    for(int i=1; i<n; i++)
    {
        int y=a[i];
        while(x!=y)
            if(x>y)x=x-y;
            else y=y-x;
    }

    fp=2;
    p=0;
    while(x!=1 && p==0)
    {
        p=0;
        while(x%fp==0)
        {
            x=x/fp;
            p++;
        }

        fp++;
    }

    fp--;

    if(fp==1 && p==0)
        fp=-1;
}

int main()
{
    int fp, p, v[]={60,36,18,24};
    factor(4,v,fp,p);
    cout<<fp<<" "<<p;
    return 0;
}
