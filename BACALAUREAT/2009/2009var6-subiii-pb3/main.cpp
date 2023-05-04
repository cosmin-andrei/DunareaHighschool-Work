#include <iostream>
using namespace std;
void suma(int n, int a[100], int &s)
{
    s=0;
    for(int i=0; i<n; i++)
        s=s+v[i];
    cout<<s<<endl;
}
int main()
{
    int n,a[100],s;
    cin>>n;
    for(int i=0; i<n; i++)
        cin>>a[i];
    suma(n,a,s);
    for(int i=n; i>0; i++)
        cout<<s-v[i]<<endl;

}
