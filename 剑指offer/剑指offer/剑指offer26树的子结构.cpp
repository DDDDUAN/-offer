#include <bits/stdc++.h>
using namespace std;

struct TreeNode {
	int val;
	TreeNode* left;
	TreeNode* right;
	TreeNode(int x) :val(x), left(NULL), right(NULL) {}
};
static bool dfs(TreeNode* A, TreeNode* B);



bool isSubStructure(TreeNode* A, TreeNode* B)
{
	if (A == nullptr && B == nullptr) return false;
	return dfs(A, B) || isSubStructure(A->left, B) || isSubStructure(A->right, B);
}
bool dfs(TreeNode* A, TreeNode* B)
{
	if (B == nullptr) return true; // ��b����ʱ��˵���Ѿ�ƥ�����
	if (A == nullptr) return false;//��aΪ��ʱ��˵��û��ƥ��
	return (A->val == B->val) && dfs(A->left, B->left) && dfs(A->right, B->right);
}


int main026()
{
	return 0;
}