#include <bits/stdc++.h>
using namespace std;

int cuttingRope1(int n)
{
	if (n < 2) return 0;
	if (n == 2) return 1;
	if (n == 3) return 2;
	int* dp = new int[n + 1];
	dp[0] = 0;
	dp[1] = 1;
	dp[2] = 2;
	dp[3] = 3;
	int max = 0;
	for (int i = 4; i <= n; i++) {
		max = 0;
		for (int j = 1; j <= i / 2; j++) {
			int temp = dp[j] * dp[i - j];
			//max = std::max(temp, max);
			if (max < temp) max = temp;
			dp[i] = max;
		}	
	}

	max = dp[n];
	delete[] dp;
	return max;
}

int cuttingRope2(int n)
{
	if (n < 2) return 0;
	if (n == 2) return 1;
	if (n == 3) return 2;
	
	int timeOf3 = n / 3;
	if (n - timeOf3 * 3 == 1) {
		timeOf3 -= 1;
	}

	int timeOf2 = (n - timeOf3 * 3) / 2;

	return (int)(pow(2, timeOf2)) * (int)(pow(3, timeOf3));
}

int main14()
{	
	cout << cuttingRope1(10) << endl;
	cout << cuttingRope2(10) << endl;
	
	return 0;
}