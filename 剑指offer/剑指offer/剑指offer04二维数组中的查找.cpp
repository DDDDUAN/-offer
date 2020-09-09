#include <bits/stdc++.h>
using namespace std;

bool findNumberIn2DArray(vector<vector<int>>& matrix, int target) {
	if (matrix.size() == 0 || matrix[0].size() == 0)  return false;
	int n = matrix.size();
	int m = matrix[0].size();
	int i = n - 1, j = 0;
	while (i >= 0 && i < n && j >= 0 && j < m) {
		if (matrix[i][j] > target) i--;
		else if (matrix[i][j] < target) j++;
		else return true;
	}
	return false;
}
int main04()
{
	
	/*vector<vector<int>> matrix = {
			{1,   4,  7, 11, 15} ,
			{2,   5,  8, 12, 19 },
			{3,   6,  9, 16, 22},
			{10, 13, 14, 17, 24 },
			{18, 21, 23, 26, 30}
	};
	*/
	vector<vector<int>> matrix = { {1,1} };
	cout << findNumberIn2DArray(matrix, 2) << endl;;



	return 0;
}