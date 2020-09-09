#include <bits/stdc++.h>
using namespace std;

struct ListNode {
	int val;
	ListNode* next;
	ListNode(int x) : val(x), next(NULL) {}
	
};

ListNode* reverseList(ListNode* head)
{
	if (head == nullptr) return nullptr;
	ListNode* pre = nullptr;
	ListNode* cur = head;
	ListNode* pHead = nullptr;
	while (cur != nullptr) {
		ListNode* temp = cur->next;
		if (cur->next == NULL) {
			pHead = cur;
		}
		cur->next = pre;
		pre = cur;
		cur = temp;
	}
	return pHead;
}

int main024()
{
	return 0;
}