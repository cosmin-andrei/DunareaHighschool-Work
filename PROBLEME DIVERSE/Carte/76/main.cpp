#include <iostream>
using namespace std;

int x[10],n;
char materii[9][15]= {" ","matematica","matematica","matematica","fizica","fizica","informatica","informatica","informatica"};
char zile[6][10]= {" ","luni","marti","miercuri","joi","vineri"};

void Afis(int k)
{
    int r,ok=1;
    for(int zi=1; zi<=5; zi++)
    {
        r=0;
        for(int i=1; i<=8; i++)
            if(x[i]==zi) r++;
            if(r==0) ok=0;
    }

    if(ok)
    {
        for( int j=1; j<=8; j++)
            cout<<zile[x[j]]<<":"<<materii[j]<<endl;
        cout<<endl;
    }
}

bool OK(int k)
{
    int r=0;
    for(int i=1; i<k; i++)
        if(x[k]==x[i]) r++;
    if(r>2) return false;
    return true;
}

bool Solutie(int k)
{
    return k==8;
}

void Back(int k)
{
    for(int i=1 ; i<=5 ; i++)
    {
        x[k]=i;
        if(OK(k))
        {
            if(Solutie(k))
                Afis(k);
            else Back(k+1);
        }

    }
}

int main()
{
    Back(1);
    return 0;
}
