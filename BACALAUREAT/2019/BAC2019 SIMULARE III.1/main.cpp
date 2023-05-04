#include <iostream>
using namespace std;

void inserare(int &n)
{
    int v[11], j=-1, dif, m=n;

    for(int i=0; i<11; ++i)
        v[i]=0;

    while(m)
    {
        v[++j]=m%10;
        ++j;
        m=m/10;
    }

    for(int i=1; i<j-1; i+=2)
    {
        dif=v[i+1]-v[i-1];
        if (dif>=0) v[i]=dif;
        else v[i]=-dif;
    }

    for (int i=j-1; i>=0; --i)
        m=m*10+v[i];

    n=m;
}

int main()
{
    int n;
    cin >> n;
    inserare(n);
    cout << n;

}
