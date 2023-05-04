#include <iostream>

using namespace std;
char S[100000];
long int Q;
int main()
{
    cin>>Q;
    for(int i=1; i<=Q; i++)
        cin>>S[i];

for(int i=1; i<=Q; i++)
{
    int ok=0;
    while(ok!=1)
    {if(S[i]=="(" && S[i+1]=="(")cout<<"0";

    }
}

    for(int i=1; i<=Q; i++)
        cout<<S[i];
    return 0;
}
