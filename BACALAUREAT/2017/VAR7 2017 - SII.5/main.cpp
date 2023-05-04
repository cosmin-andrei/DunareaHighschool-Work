#include <iostream>

using namespace std;

int main()
{
    int n;
    cin>>n;

    float a[50][50];

    for(int i=0; i<n; i++)
        for(int j=0; j<n; j++)
            cin>>a[i][j];

    n=n+1;
    for(int i=n-1; i>n/2; i--)
        for(int j=0; j<n-1; j++)
            a[i][j]=a[i-1][j];

    for(int j=0; j<n; j++)
        {
            float ma=0;
            for(int i=0; i<n/2; i++)
                ma=ma+a[i][j];
            for(int i=n/2+1; i<n; i++)
                ma=ma+a[i][j];

            a[n/2][j]=ma/(n-1);
        }

            for(int i=0; i<n; i++)
        {for(int j=0; j<n-1; j++)
            cout<<a[i][j]<<" ";
            cout<<endl;}


    return 0;
}
