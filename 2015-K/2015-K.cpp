#include <iostream>
using namespace std;

int main()
{
    int T;
    cin >> T;

    for (int test = 0; test < T; test++)
    {
        int N;
        cin >> N;

        int treta, polov, rodeni;

        treta = (N / 3) * 2;
        polov = N / 2;

        rodeni = treta + polov;

        if (rodeni % 2 == 0)
        {
            
        }
        else
        {
            rodeni -= 1;
        }

        int prodadeni, ostavat;

        prodadeni = rodeni / 2;

        ostavat = rodeni - prodadeni;

        int nakraq = N + ostavat;

        cout << nakraq << endl;
    }

    return 0;
}