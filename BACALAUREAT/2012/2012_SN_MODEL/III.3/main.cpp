#include <iostream>

using namespace std;

int main()
{
    int n,v[21],nr;
    cin>>n;

    for(int i=0; i<n; i++)
    {
        cin>>nr;
        if(nr%2!=0)v[i]=nr;
        else
        {
            v[i]=nr/2;
            v[i+1]=nr;
            i++;
            n++;
        }
    }

        for(int i=0; i<n; i++)
            cout<<v[i]<<" ";

    return 0;
}
