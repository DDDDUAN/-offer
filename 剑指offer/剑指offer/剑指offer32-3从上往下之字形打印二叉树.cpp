#include<bits/stdc++.h>
using namespace std;

struct TreeNode {
	int val;
	TreeNode* left;
	TreeNode* right;
	TreeNode(int x) :val(x), left(NULL), right(NULL) {}
};

vector<vector<int>> levelOrder(TreeNode* root)
{
	vector<vector<int>> ans;
	if (root == nullptr) return ans;
	vector<int> clows;
	int cur = 0;
	int next = 1;
	stack<TreeNode*> level[2];
	level[cur].push(root);
	while (!level[0].empty() || !level[1].empty()) {
		TreeNode* temp = level[cur].top();
		level[cur].pop();
		clows.push_back(temp->val);

		if (cur == 0) {
			if (temp->left) {
				level[next].push(temp->left);
			}
			if (temp->right) {
				level[next].push(temp->right);
			}
		}
		else {
			if (temp->right) {
				level[next].push(temp->right);
			}
			if (temp->left) {
				level[next].push(temp->left);
			}
		}
		if (level[cur].empty()) {
			ans.push_back(clows);
			clows.clear();
			cur = 1 - cur;
			next = 1 - next;
		}
	}
	return ans;
}



int main()
{
	return 0;
}