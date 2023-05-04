#include<iostream>

using namespace std;

int main()
{

    int n, v[21], k;

    cin >> n;

    for (int i = 1; i <= n; i++)

        cin >> v[i];

    cin >> k;

    int aux = v[k];

    for (int i = k; i >= 2; i--)

        v[i] = v[i - 1];

    v[1] = aux;

    for (int i = 1; i <= n; i++)

        cout << v[i] << ' ';

    return 0;

}
