#include <iostream>
#include <fstream>
using namespace std;
ifstream f("cerc.in");
struct cerculete
{
    float x,y;
    float raza;

} v[30];

int main()
{
    int n,o[100];
    f>>n;
    for(int i=0; i<n; i++)
    {
        f>>v[i].x>>v[i].y>>v[i].raza;
        o[i]=i+1;
    }
    for(int i=0; i<n-1; i++)
        for(int j=i+1; j<n; j++)
            if(v[i].x+v[i].raza > v[j].x+v[i].raza)
            {
                cerculete aux = v[i];
                v[i] = v[j];
                v[j] = aux;
                swap(o[i],o[j]);
            }
 // for(int i=0; i<n; i++)
        //cout<<"balon "<<o[i]<<" = "<<v[i].x<<" "<<v[i].y<<" "<<v[i].raza<<endl;
    int i=0, x=v[i].raza+v[i].x;
    cout<<"balon "<<o[i]<<" = "<<v[i].x<<" "<<v[i].y<<" "<<v[i].raza<<endl;

    while(i<n)
    {
        if(x<=v[i].x-v[i].raza)
        {
            cout<<"balon "<<o[i]<<" = "<<v[i].x<<" "<<v[i].y<<" "<<v[i].raza<<endl;
            x=v[i].raza+v[i].x;
        }
        i++;
    }
    return 0;
}
