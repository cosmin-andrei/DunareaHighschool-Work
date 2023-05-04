#include <iostream>
#include <cstring>
using namespace std;

long int value(char cuvant[6])
{
    for(unsigned int i=0; i<strlen(cuvant); i++)
        if(cuvant[i]<'a' || cuvant[i]>'z')return 0;
    int p=1,nr=0;
    for(unsigned int i=0; i<strlen(cuvant); i++)
    {
        nr=nr+p*(cuvant[i]-'a'+1);
        p=p*100;
    }
    return nr;

}

int main()
{
    char s1[6], s2[6];
    cin>>s1>>s2;
    cout<<value(s1)<<" "<<value(s2)<<endl;
    if(value(s1)==value(s2))cout<<"DA";
    else cout<<"NU";
    return 0;
}
