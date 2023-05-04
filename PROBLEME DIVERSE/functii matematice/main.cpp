#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int x;
    cin >> x;
    cout << sqrt(x) <<" "<< (int)sqrt(x) <<endl;
    if(sqrt(x) == (int)sqrt(x))
            cout<<x<<" este patrat perfect";
    else cout<<x<<" nu este patrat perfect";
    cout<<endl;
    cout<<abs(100)<<" "<<abs(-100)<<endl;

    int a,b;
    cin>>a>>b;
    cout<<abs(a-b)<<endl;

    cout<<pow(2,3)<<" "<<pow(10,4)<<endl;
    cout<<pow(2.5,2)<<endl;
    cout<<pow(2,0.5)<<endl; ///echivalent cu sqrt(2);

    return 0;
}
