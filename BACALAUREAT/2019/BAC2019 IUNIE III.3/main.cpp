#include <iostream>
#include <fstream>
using namespace std;


int main()
{

    ifstream f("bac.txt");
    int a, pr = -1, maxim = -1;

    while (f >> a)
    {

        if (a > maxim || a == pr)
        {
            cout << a << " ";
            maxim = a;
            pr = a;
        }
        else
        {
            pr = -1;
        }
    }

    cout << endl;

    return 0;
}
