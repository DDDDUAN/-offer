#include <bits/stdc++.h>
using namespace std;

void printBig(char* Arr)
{
	if (Arr == nullptr) return;
	bool isbegin = true;
	int len = strlen(Arr);
	for (int i = 0; i < len; i++)
	{
		if (isbegin && Arr[i] != '0')
			isbegin = false;

		if (!isbegin)
			cout << Arr[i];
	}
	cout << ",";
}

void printBigNum(int n)
{
	if (n <= 0)	return;

	char* Arr = new char[n + 1];
	Arr[n] = '\0';
	for (int i = 0; i < n; i++)
		Arr[i] = '0';

	while (true)
	{
		int m = n - 1;
		Arr[m]++;
		while (m > 0)
		{
			if (Arr[m] > '9')
			{
				Arr[m] = '0';
				m--;
				Arr[m]++;
			}
			else
				break;
		}
		if (Arr[0] > '9')
			break;
		else
			printBig(Arr);
	}

	delete[] Arr;
	cout << endl;
}


int main017()
{
	printBigNum(3);
	return 0;
}