#include <iostream>
#include <cmath>
using namespace std;

int GetSum(int w) {

	int sum = 0;

	for (int i = 1; i <= w/2; i++)
	{
		long int delitel = pow(i,2);

		if (w % delitel == 0)
		{
			sum = sum + i;
		}
		
		if (delitel > w)
		{
			break;
		}
	}

	return sum;
}

int main()
{
    int q;
    cin >> q;

	for (int test = 0; test < q; test++)
	{
		long long int wi;
		cin >> wi;

		int sum = GetSum(wi);

		cout << sum << endl;
	}

	return 0;
}
