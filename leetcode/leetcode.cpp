#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <functional>
#include <stack>

struct ListNode {
	int val;
	ListNode* next;
	ListNode() : val(0), next(nullptr) {}
	ListNode(int x) : val(x), next(nullptr) {}
	ListNode(int x, ListNode* next) : val(x), next(next) {}
};

ListNode* deleteDuplicates(ListNode* head)
{
	ListNode* temp = head;
	while (temp && temp->next)
	{
		if (temp->val == temp->next->val)
		{
			temp->next = temp->next->next;
			continue;
		}
		temp = temp->next;
	}
	return head;
}

int main()
{


	return 0;
}

