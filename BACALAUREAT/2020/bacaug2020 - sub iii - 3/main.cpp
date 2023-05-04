#include <iostream>
#include <fstream>
using namespace std;
ifstream in("bac.txt");

int main()
{long int nr,mini=100,maxi=0;

while(in>>nr)
{long int aux = nr;
int k;

    for(k=0; aux!=0; k++)
        aux=aux/10;

    if(k == 2)
        {if(mini>nr) mini=nr;
        else if(maxi<nr) maxi=nr;}

}

cout<<mini-1<<" "<<maxi+1;


    return 0;
}
