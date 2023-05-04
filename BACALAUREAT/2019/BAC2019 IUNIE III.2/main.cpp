#include <iostream>
using namespace std;


int main() {

        int n, m, i, j, a[21][21];
        cin >> m >> n;

        for (i = 0; i < m; i++)
                for (j = 0; j < n; j++) {
                        cin >> a[i][j];
                }

        int s = 1;
        for (i = 0; i < m; i++)
                for (j = 0; j < (n - 1) / 2; j++) {
                        if (a[i][j] != a[i][n - j - 1]) {
                                s = 0;
                        }

                }

        if (s == 1)
                cout << "DA" << endl;
        else
                cout << "NU" << endl;

        return 0;
}
