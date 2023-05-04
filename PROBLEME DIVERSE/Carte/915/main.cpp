#include <iostream>
#include <fstream>
#include <cmath>
using namespace std;
ifstream f("date.in");
int a[100][100],n;
int main()
{
    f>>n;
    for(int i=0; i<n; i++)
        for(int j=0; j<n; j++)
            f>>a[i][j];

    int ok=1,s=0;
    for(int i=0; i<n; i++)
        for(int j=0; j<n; j++)
        {
            if(a[i][j]!=a[j][i]) ok=0;
            else if(i==j && a[i][j]!=0) ok=0;
            else if(abs(a[i][j])>1) ok=0;
            s=s+a[i][j];
        }
    if(ok==1)cout<<s/2;
    else cout<<"NU";


    return 0;
}
