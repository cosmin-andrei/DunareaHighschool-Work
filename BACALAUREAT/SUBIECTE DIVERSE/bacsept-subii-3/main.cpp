#include <iostream>
using namespace std;
int main()
{
    int i,j,a[6][4];

    for(i=0; i<6; i++)
        for(j=0; j<4; j++)
        cin>>a[i][j];

    for(i=0; i<6; i++)
    {
        cout<<endl;
        for(j=0; j<4; j++)
            cout<<a[i][j];
    }
    return 0;
}
