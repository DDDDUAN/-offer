#include <bits/stdc++.h>
using namespace std;

int fib(int n)
{
	vector<int> dp(n + 2, 0);
	dp[1] = 0;
	for (int i = 2; i <= n; i++) {
		dp[i] = (dp[i - 1] + dp[i - 2]) % 1000000007;
	}
	return dp[n];
}


int main101()
{
	return 0;
}