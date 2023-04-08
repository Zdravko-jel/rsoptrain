#include <iostream>
using namespace std;

int main()
{
	int t;
	cin >> t;

	for (int test = 0; test < t; test++)
	{
		int n;
		cin >> n;

		int broy = 0;

		if (n % 2 == 0)
		{
			broy = (n * 2) - 1;
		}
		else
		{
			broy = 3;

			for (int i = 2; i < n; i++)
			{
				if (n % i == 0)
				{
					broy += 2;
				}
			}
		}

		cout << broy << endl;
	}

	return 0;
}
