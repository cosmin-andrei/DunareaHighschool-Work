#include <iostream>
using namespace std;

void divizor(int n, int &d)
{
    for(d=n; d>=2; d--)
        if(n%d==0)
        {
            int ok=1;
            for(int dp=2; dp<=d/2; dp++)
                if(d%dp==0)ok=0;
            if(ok==1) break;
        }

}

int main()
{
    int n,d;
    cin>>n;
    divizor(n,d);
    cout<<d;
    return 0;
}
