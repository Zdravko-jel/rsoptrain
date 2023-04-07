#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	
	
	int N;
	cin >> N;

	signed long long int chislo = pow(N,N);

	//cout << chislo << endl;

	//cout << chislo % 10 << endl;

	int digit = 0;

	long long int chisloto = chislo;

	while (chislo != 0)
	{
		chislo = chislo / 10;

		digit++;
	}

	//cout << digit << endl;

	long int* cifri = new long int[digit];

	if (digit < N)
	{
		cout << "*" << endl;
	}
	else
	{
		for (int i = digit; i > 0; i--)
		{
			cifri[i] = chisloto % 10;

			chisloto /= 10;
		}

		for (int i = 1; i <= digit; i++)
		{
			if (i == N)
			{
				cout << cifri[i] << endl;
			}
		}
	}

	return 0;
}