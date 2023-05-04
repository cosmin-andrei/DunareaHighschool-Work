#include <iostream>

using namespace std;

int main()
{
    int n, v[50];

    cin>>n;

    for(int i=0; i<n; i++)
        cin>>v[i];


    /*for(int i=0; i<n; i++)
    {
        int nr;
        cin>>nr;
        if(nr>0)
        {
            v[i]=v[i+1]=nr;
            i++;
            n++;
        }
        else v[i]=nr;
    }*/

    for(int i=0; i<n; i++)
    {
        if(v[i]>0)
        {
            n++;
            for(int j=n-1; j>i; j--)
                v[j]=v[j-1];
            v[i+1]=v[i];
            i++;
        }
    }


    for(int i=0; i<n; i++)
        cout<<v[i]<<" ";

    return 0;
}
