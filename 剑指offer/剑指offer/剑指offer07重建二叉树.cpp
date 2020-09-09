#include <bits/stdc++.h>
using namespace std;

struct TreeNode {
	int val;
	TreeNode* left;
	TreeNode* right;
	TreeNode(int x) :val(x), left(NULL), right(NULL) {}
};
TreeNode* recursionBuild(vector<int>::iterator prebeign, vector<int>::iterator preend, vector<int>::iterator inbegin, vector<int>::iterator inend)
{
	if (inbegin == inend) return NULL;
	TreeNode* cur = new TreeNode(*prebeign);
	auto root = find(inbegin,inend,*prebeign);
	cur->left = recursionBuild(prebeign+1,prebeign+1+(root - inbegin),inbegin,root);
	cur->right = recursionBuild(prebeign + 1 + (root - inbegin),preend,root+1,inend);
	return cur;

}

TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder)
{
	return recursionBuild(preorder.begin(), preorder.end(), inorder.begin(), inorder.end());
}

int main07()
{
	return 0;
}