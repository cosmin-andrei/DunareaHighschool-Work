#include <iostream>
#include <fstream>
using namespace std;

ifstream f("bac.txt");

int main()
{
    int nr, v[100]={0};
    while(f>>nr)
        if(nr>=10 && nr<=99)
            v[nr]++;

    int okay=0, minim=0, maxim;
    for(int i=10; i<=98; i=i+2)
      if(v[i]==0)
      {
          if(okay==0)
            {minim=i;
            okay=1;}

           maxim=i;
      }

      if(minim==0 || maxim==minim) cout<<"nu exista";
      else cout<<minim<<" "<<maxim;

    return 0;
}
