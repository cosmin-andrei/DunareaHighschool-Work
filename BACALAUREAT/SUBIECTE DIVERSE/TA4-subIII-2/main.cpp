#include <iostream>
using namespace std;

int main()
{
    int n,m,a[100][100];
    cin>>m>>n;

    for(int i=0; i<m; i++)
        for(int j=0; j<n; j++)
            cin>>a[i][j];

    int maxim;
    for(int i=0; i<m; i++)
    {
        maxim=0;

        for(int j=0; j<n; j++)
            if(maxim<a[i][j] && a[i][j]<21)maxim=a[i][j];
            if(maxim==0) cout<<"nu exista";
            else cout<<maxim;

        cout<<endl;
    }


    return 0;
}
