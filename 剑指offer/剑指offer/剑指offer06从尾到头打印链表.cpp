#include <bits/stdc++.h>
using namespace std;

struct ListNode {
	int val;
	ListNode* next;
	ListNode(int x) :val(x), next(NULL) {}
};

/* ÌØ±ğÂı */

vector<int> reversePrint(ListNode* head)
{
	vector<int> ans;
	if (head == nullptr) return ans;
	ListNode* tmp = head;
	while (tmp != nullptr) {
		ans.insert(ans.begin(), tmp->val);
		tmp = tmp->next;
	}
	return ans;
}
/*  ÓÃÕ» */
vector<int> reversePrint2(ListNode* head)
{
	vector<int> ans;
	stack<int> tmp;
	ListNode* node = head;
	while (node != nullptr) {
		tmp.push(node->val);
		node = node->next;
	}
	while (!tmp.empty()) {
		ans.push_back(tmp.top());
		tmp.pop();
	}
	return ans;
}

int main06()
{
	return 0;
}