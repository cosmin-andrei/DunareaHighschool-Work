#include <iostream>
#include <cstring>
using namespace std;
char S[101];
int main()
{

    cin.getline(S,100);

    int j;
    if(strlen(S)%2==0)
        j=strlen(S)-1;
    else
        j=strlen(S)-2;

    for(int i=j; i>=0; i--)
        S[strlen(S)]=S[i];

    cout<<S;



    return 0;
}
