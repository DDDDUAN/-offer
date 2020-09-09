#include <bits/stdc++.h>
using namespace std;

struct TreeNode {
	int val;
	TreeNode* left;
	TreeNode* right;
	TreeNode(int x) :val(x), left(NULL), right(NULL) {}
};

vector<int> levelOrder(TreeNode* root)
{
	vector<int> res;
	deque<TreeNode*> dequeTree;
	if (root == nullptr) return res;
	dequeTree.push_back(root);
	while (!dequeTree.empty()) {
		TreeNode* temp = dequeTree.front();
		dequeTree.pop_front();
		res.push_back(temp->val);
		if (temp->left) {
			dequeTree.push_back(temp->left);
		}
		if (temp->right) {
			dequeTree.push_back(temp->right);
		}
	}
	return res;
}


int main032()
{
	return 0;
}