#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int n;
    cin >> n;

	while (n != 0)
	{
		int countnegative = 0;
		
		int* arr = new int[n];

		for (int i = 0; i < n; i++)
		{
			cin >> arr[i];
		}

		for (int i = 0; i < n; i++)
		{
			if (arr[i] < 0) 
			{
				countnegative++;
			}
		}

		int var = n - countnegative;

		cout << var << endl;

		cin >> n;
	}
}
