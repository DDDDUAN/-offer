#include <bits/stdc++.h>
using namespace std;

struct ListNode {
	int val;
	ListNode* next;
	ListNode(int x) : val(x), next(NULL) {}
};

ListNode* mergeTwoLists(ListNode* l1, ListNode* l2)
{
	if (l1 == nullptr && l2 == nullptr) return nullptr;
	ListNode* newHead = new ListNode(0);
	ListNode* temp = newHead;
	while (l1 != nullptr && l2 != nullptr) {
		if (l1->val < l2->val) {
			temp->next = l1;
			l1 = l1->next;
		}
		else {
			temp->next = l2;
			l2 = l2->next;
		}
		temp = temp->next;
	}
	if (l1 == nullptr) {
		temp->next = l2;
	}
	if (l2 == nullptr) {
		temp->next = l1;
	}

	return newHead->next;
}


int main25()
{
	return 0;
}