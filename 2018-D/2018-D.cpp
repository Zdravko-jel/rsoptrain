#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;

	for (int test = 0; test < t; test++)
	{
		int x0, x1, y0, y1, z0, z1;

		cin >> x0 >> x1 >> y0 >> y1 >> z0 >> z1;

		int* arrx = new int[(x1 - x0) + 1];
		int* arry = new int[(y1 - y0) + 1];
		int* arrz = new int[(z1 - z0) + 1];

		for (int i = x0; i <= x1; i++)
		{
			arrx[i] = i;
		}
		for (int i = y0; i <= y1; i++)
		{
			arry[i] = i;
		}
		for (int i = z0; i <= z1; i++)
		{
			arrz[i] = i;
		}

		
	}
}
