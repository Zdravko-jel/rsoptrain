#include <iostream>
#include <string>
using namespace std;

int CountDigits(long int n)
{
	if (n == 0)
	{
		return 1;
	}

	int count = 0;

	while (n != 0)
	{
		n = n / 10;
		count++;
	}

	return count;
}

int findRepeat1(int arr[], int n) {
	int count1 = 0; //count of repeated element
	int count0 = 0;

	for (int i = 0; i < n; i++) {
		if (arr[i] == 1 && arr[i] == arr[i + 1] && i + 1 != n) {
			count1++;
		}
	}
	count1++; //for last element

	return count1++;
}

int findRepeat0(int arr[], int n) {
    //count of repeated element
	int count0 = 0;

	for (int i = 0; i < n; i++) {
		if (arr[i] == 0 && arr[i] == arr[i + 1] && i + 1 != n) {
			count0++;
		}
	}
	count0++; //for last element

	return count0++;
}

int main()
{
	string n;

	cin >> n;

	while (n != " ")
	{
		const int lenght = n.length();

		char* char_array = new char[lenght + 1];

		strcpy(char_array, n.c_str());

		long long int number = atoi(char_array);

		int digits = CountDigits(number);

		int* arr = new int[digits];

		for (int i = digits - 1; i >= 0; i--)
		{
			arr[i] = number % 10;

			number = number / 10;
		}

		int count1 = findRepeat1(arr, digits);

		int count0 = findRepeat0(arr, digits);

		cout << count0 << " " << count1 << endl;

		cin >> n;
	}
}