#include <bits/stdc++.h>
using namespace std;

vector<int> spiralOrder(vector<vector<int>>& matrix)
{
	int l = 0, r = matrix[0].size() - 1, t = 0, d = matrix.size() - 1;
	vector<int> res;
	while (1) {
		for (int i = l; i <= r; i++) res.push_back(matrix[t][i]);
		if (++t > d) break;
		for (int i = t; i <= d; i++) res.push_back(matrix[i][r]);
		if (--r < l) break;
		for (int i = r; i >= l; i--) res.push_back(matrix[d][i]);
		if (--d < t) break;
		for (int i = d; i >= t; i--) res.push_back(matrix[i][l]);
		if (++l > r) break;
	}
	return res;
}

int main029()
{
	vector<vector<int>> matrix = { {1,2,3 } ,{4, 5, 6 }, { 7,8,9 } };
	vector<int> res;
	res = spiralOrder(matrix);
	for (int i = 0; i < res.size(); i++) {
		cout << res[i] << endl;
	}
	return 0;
}