#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    int n,k,kprim=0;
    cin>>n>>k;

    for(int i=0; i<n; i++)
    {
        char s[11];
        cin>>s;

        if(kprim<k && strchr("aeiou",s[strlen(s)-1]))
           {
               cout<<s<<endl;
               kprim++;
           }
    }

    if(kprim==0)
        cout<<"nu exista";
    return 0;
}
