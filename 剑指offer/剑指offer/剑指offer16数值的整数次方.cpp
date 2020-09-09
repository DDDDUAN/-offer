#include <bits/stdc++.h>
using namespace std;

//µÝ¹é
double myPow(double x, int n)
{
	if (n == 0) return 1;
	if (n == -1) return 1/x;
	
	if (n & 1) {
		return myPow(x * x, n >> 1) * x;
	}
	else {
		return myPow(x * x, n >> 1);
	}
}

//µü´ú
double myPow1(double x, int n)
{
	if (n == 0) return 1;
	long temp = n;
	double res = 1.0;
	if (temp < 0) {
		x = 1 / x;
		temp = -temp;
	}
	while (temp) {
		if (temp & 1) res *= x;
		x *= x;
		temp >>= 1;
	}
	return res;
}

int main16()
{
	cout << myPow1(2.000, 10) << endl;
	return 0;
}