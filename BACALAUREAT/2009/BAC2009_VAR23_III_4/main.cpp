#include <iostream>
#include <fstream>
using namespace std;

ifstream fin("bac.txt");

int main()
{
    int n, a, b, max_a=0, max_b=0, max_ab=0;

    fin>>n;
    while(fin>>a>>b)
        if((b-a>max_ab) || (b-a==max_ab && max_b>b))
            {
        max_a=a;
        max_b=b;
        max_ab=b-a;
    }

    cout<<max_a<<" "<<max_b;

    return 0;
}
