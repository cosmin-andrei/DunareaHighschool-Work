#include <iostream>
using namespace std;

int CifrePrime(unsigned int n)
{
    int suma = 0;
    while(n)
    {
        int c = n % 10;
        if(c == 2 || c == 3 || c == 5 || c == 7) // Cifre Prime
            suma = suma + c;
        n = n / 10;
    }
    return suma;
}

int main()
{
    cout<<CifrePrime(123405);
    return 0;
}
