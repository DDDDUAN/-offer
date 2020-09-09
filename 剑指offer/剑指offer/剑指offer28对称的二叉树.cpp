/*
	���ݹ�˼��������

	1���ݹ�ĺ���Ҫ��ʲô��
	�������������жϴ�����������Ƿ���
	���룺TreeNode left, TreeNode right
	������ǣ�true�����ǣ�false
	2���ݹ�ֹͣ��������ʲô��
	��ڵ���ҽڵ㶼Ϊ��->�����˶�����һ�� ->true
	��ڵ�Ϊ�յ�ʱ���ҽڵ㲻Ϊ�գ���֮->���ò�һ��-> false
	���ҽڵ�ֵ�����->���ò�һ�� -> false
	3����ĳ�㵽��һ��Ĺ�ϵ��ʲô��
	Ҫ��������������ôһ������ߵ����Ҫ�Ͷ������ұߵ��ұ߾���һ������ߵ��ұ�Ҫ�Ͷ������ұߵ���߾���
	���õݹ麯���������������
	���õݹ麯���������Һ�����
	ֻ����������Ҿ��������Һ��������ʱ�����ǲ���˵���������Ǿ����
	4�����õݹ麯����������֪���������Һ����Ƿ��񣬴����ֵ��root�����Ӻ��Һ��ӡ���֮ǰ�ǵ��и�root == null��
*/

#include <bits/stdc++.h>
using namespace std;

struct TreeNode {
	int val;
	TreeNode* left;
	TreeNode* right;
	TreeNode(int x):val(x),left(nullptr),right(nullptr){}
};

bool dfs(TreeNode* root1, TreeNode* root2)
{
	if (root1 == nullptr && root2 == nullptr) return true;
	if (root1 == nullptr || root2 == nullptr) return false;

	return (root1->val == root2->val) && dfs(root1->left, root2->right) && dfs(root1->right, root2->left);
}

bool isSymmetric(TreeNode* root)
{
	if (root == nullptr) return true;
	return dfs(root->left, root->right);
}

int main028()
{
	return 0;
}