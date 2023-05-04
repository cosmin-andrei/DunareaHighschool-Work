#include <iostream>

using namespace std;

int main()
{
    int n, a[100][100];
    cin>>n;

    for(int i=0; i<n; i++)
        cin>>a[0][i];

    for(int i=1; i<n; i++)
        for(int j=1; j<n; j++)
            a[i][j]=a[i-1][j-1];

            for(int i=1; i<n; i++)
                a[i][0]=a[i-1][n-1];

    for(int i=0; i<n; i++)
       {for(int j=0; j<n; j++)

       cout<<a[i][j]<<" ";
       cout<<endl;
       }

            return 0;
}
