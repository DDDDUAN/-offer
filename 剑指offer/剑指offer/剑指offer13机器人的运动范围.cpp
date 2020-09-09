#include <bits/stdc++.h>
using namespace std;

int vis[101][101] = { 0 };
int get(int n)
{
	int res = 0;
	while (n) {
		int temp = n % 10;
		res += temp;
		n /= 10;
	}
	return res;
}

int dfs(int x, int y, int m, int n, int k)
{
	if (x < 0 || x >= m || y<0 || y >= n || vis[x][y] || get(x) + get(y) > k) return 0;
	vis[x][y] = 1;
	return dfs(x + 1, y, m, n, k) + dfs(x - 1, y, m, n, k) + dfs(x, y + 1, m, n, k) + dfs(x, y - 1, m, n, k) + 1;
}


int movingCount(int m, int n, int k)
{
	return dfs(0, 0, m, n, k);
}



int main13()
{
	//cout << movingCount(2, 3, 1)<<endl;
	cout << movingCount(3, 1, 0)<< endl;
	return 0;
}