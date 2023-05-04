#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    char v[101],*p;
    char c[101];

    cin.getline(v,100);

    for(int i=0; i<strlen(v); i++)
    {
        if(v[i]=='.')
        {
            while(isdigit(v[i-1]))
            {strcpy(v+i-1,v+i);
            i--;}

            int j=i+1;
            while(isdigit(v[j]))
                strcpy(v+j,v+j+1);

            strcpy(v+i,v+i+1);
        }
    }


    cout<<v;

    return 0;
}
