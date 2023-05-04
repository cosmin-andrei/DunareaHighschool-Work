#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    int n;
    char s[21][21];

    cin>>n;
    for(int k=1; k<=n; k++)
    {
        cin.get();
        cin.get(s[k],21);
    }

    int nr=0;
    for(int k=2; k<=n; k++)
    {
        int i=strlen(s[1])-1;
        int j=strlen(s[k])-1;
        int m=0;

        while(i>=0 && j>=0 && s[1][i]==s[k][j])
        {
            i--;
            j--;
            m++;
        }

        if(m==strlen(s[1]))
            nr++;

    }

    cout<<nr;

    return 0;
}
