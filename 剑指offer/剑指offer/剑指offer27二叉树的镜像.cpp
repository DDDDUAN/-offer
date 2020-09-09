#include <bits/stdc++.h>
using namespace std;

struct TreeNode {
	int val;
	TreeNode* left;
	TreeNode* right;
	TreeNode(int x):val(x),left(NULL),right(NULL){}
};

TreeNode* dfs(TreeNode* root)
{
	if (root == nullptr) return root;
	dfs(root->left);
	dfs(root->right);

	TreeNode* temp = root->left;
	root->right = root->left;
	root->left = temp;
	return root;
}

TreeNode* mirrorTree(TreeNode* root)
{
	return dfs(root);
}


int main027()
{
	return 0;
}