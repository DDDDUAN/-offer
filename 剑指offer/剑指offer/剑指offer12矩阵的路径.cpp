#include <bits/stdc++.h>
using namespace std;

vector<vector<int>> dir = { {0,1},{0,-1},{1,0},{-1,0} };

bool dfs(vector<vector<char>>& board, vector<vector<int>>& vis, int i, int j, string word, int w)
{
	vis[i][j] = 1;
	if (w == word.size()) return true;
	w++;
	for (auto xy : dir) {
		int x = i + xy[0];
		int y = j + xy[1];
		if (x < 0 || x >= board.size() || y < 0 || y >= board[0].size() || vis[x][y] || board[x][y] != word[w-1]) continue;
		else {
			if (dfs(board, vis, x, y, word, w))
				return true;
		}
	}
	vis[i][j] = 0;
	return false;
}

bool exist(vector<vector<char>>& board, string word)
{
	int m = board.size();
	int n = board[0].size();

	vector<vector<int>> vis(m, vector<int>(n, 0));

	for (int i = 0; i < m; i++) {
		for (int j = 0; j < n; j++) {
			if (board[i][j] == word[0]) {
				if (dfs(board, vis, i, j, word, 1)) {
					return true;
				}
			}
		}
	}
	return false;
}


int main012()
{
	vector<vector<char>> board = { {'A','B','C','E'},{'S','F','C','S'},{'A','D','E','E'} };
	string str = "ABCCED";
	cout << exist(board, str) << endl;
	return 0;
}