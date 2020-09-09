#include <bits/stdc++.h>
using namespace std;

static bool dfs(vector<int>& sequence, int l, int r)
{
	if (l >= r) return true;

	int root = sequence[r - 1];

	int i = l;
	for (; i < r - 1; i++) {
		if (sequence[i] > root) {
			break;
		}
	}
	int j = i;
	for (; j < r - 1; j++) {
		if (sequence[j] < root) {
			return false;
		}
	}
	bool left = true;
	if (i > 0) {
		left = dfs(sequence, l, i - 1);
	}
	bool right = true;
	if (i < r - 1) {
		right = dfs(sequence, i, r - 1);
	}
	return left && right;
}

bool VerifySquenceOfBST(vector<int>& sequence)
{
	return dfs(sequence, 0, sequence.size());
}

int main()
{
	vector<int> expleam = { 1,3,2,6,5 };
	cout << VerifySquenceOfBST(expleam) << endl;
	
	return 0;
}