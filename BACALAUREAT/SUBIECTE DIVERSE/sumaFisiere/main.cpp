#include <fstream>
using namespace std;
ifstream f("suma.in");
ofstream g("suma.out");
unsigned int a,b;
int main()
{
    f>>a>>b;
    g<<a+b;
}
