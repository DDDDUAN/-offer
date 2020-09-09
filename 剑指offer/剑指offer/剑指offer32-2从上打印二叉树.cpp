#include <bits/stdc++.h>
using namespace std;

struct TreeNode {
	int val;
	TreeNode* left;
	TreeNode* right;
	TreeNode(int x) :val(x), left(NULL), right(NULL) {}
};
static vector<vector<int>> levelOrder(TreeNode* root)
{
	vector<vector<int>> ans;
	if (root == nullptr) return ans;
	vector<int> clows;
	int toBePrint = 1;
	int nextLevel = 0;
	queue<TreeNode*> node;
	node.push(root);
	while (!node.empty()) {
		TreeNode* temp = node.front();
		node.pop();
		clows.push_back(temp->val);
		if (temp->left) {
			node.push(temp->left);
			nextLevel++;
		}
		if (temp->right) {
			node.push(temp->right);
			nextLevel++;
		}
		toBePrint--;
		if (toBePrint == 0) {
			ans.push_back(clows);
			toBePrint = nextLevel;
			nextLevel = 0;
			clows.clear();
		}
	}
	return ans;
}


int main()
{
	return 0;
}