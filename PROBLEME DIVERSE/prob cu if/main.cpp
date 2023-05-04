#include <iostream>

using namespace std;

int main()
{
    int n;
    cin>>n;

    if(n%4==0)
        cout<<"ZERO";

    else if(n%4==1)
        cout<<"UNU";

    else if(n%4==2)
        cout<<"DOI";

    else
        cout<<"TREI";

    cout<<endl;

    switch(n%4)
    {
    case 0:
        cout<<"ZERO";
        break;

    case 1:
        cout<<"UNU";
        break;

    case 2:
        cout<<"DOI";
        break;

    default:
        cout<<"TREI";
    }

    return 0;
}
