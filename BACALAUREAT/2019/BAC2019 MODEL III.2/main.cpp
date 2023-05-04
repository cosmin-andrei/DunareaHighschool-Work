#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    char s[101];
    cin.getline(s, 101);

    char rez[4];
    rez[3] = '\0';

    int cuvcur = 1;
    char *cuv = strtok(s, " ");
    while(cuv != NULL)
    {
        if(cuvcur == 1)
        {
            bool c = false;
            for(int i = 0; i < strlen(cuv); i++)
            {
                if(cuv[i] != 'a' && cuv[i] != 'e' && cuv[i] != 'i' && cuv[i] != 'o' && cuv[i] != 'u')
                {
                    rez[0] = cuv[i];
                    c = true;
                }
            }
            if(c == false)
            {
                cout << "nu exista";
                return 0;
            }
        }
        if(cuvcur == 2)
        {
            bool v = false;
            for(int i = 0; i < strlen(cuv); i++)
            {
                if(cuv[i] == 'a' || cuv[i] == 'e' || cuv[i] == 'i' || cuv[i] == 'o' || cuv[i] == 'u')
                {
                    rez[1] = cuv[i];
                    v = true;
                    break;
                }
            }
            if(v == false)
            {
                cout << "nu exista";
                return 0;
            }
        }
        rez[2] = cuv[strlen(cuv) - 1];

        cuv = strtok(NULL, " ");
        cuvcur++;
    }
    cout << rez;
    return 0;
}
