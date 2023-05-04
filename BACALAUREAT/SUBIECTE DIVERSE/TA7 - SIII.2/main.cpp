#include <iostream>

using namespace std;

int main()
{
    int x, a[100][100];

    cin>>x;

    int aux=x,n=0;

    while(aux)
    {
        n++;
        aux/=10;
    }

    for(int j=n; j>=1; j--)
    {
        a[1][j]=x%10;
        x=x/10;
    }

    for(int i=1; i<=n; i++)
    {
        for(int j=1; j<=n; j++)
            cout<<a[1][j]<<" ";
        cout<<endl;
    }



    return 0;
}
