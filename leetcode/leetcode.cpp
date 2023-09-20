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

class Solution {
public:
	// https://leetcode.com/problems/merge-two-sorted-lists/solutions/3431490/c-java-python-javascript-full-explained-iterative-approach-recursive-approach/
	// Iterative Approach
	ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
		ListNode* ans = new ListNode();
		ListNode* ptr = ans;

		while (list1 && list2)
		{
			if (list1->val <= list2->val)
			{
				ans->next = new ListNode(list1->val);
				list1 = list1->next;
			}
			else
			{
				ans->next = new ListNode(list2->val);
				list2 = list2->next;
			}
			ans = ans->next;
		}
		while (list1)
		{
			ans->next = new ListNode(list1->val);
			list1 = list1->next;
			ans = ans->next;
		}
		while (list2)
		{
			ans->next = new ListNode(list2->val);
			list2 = list2->next;
			ans = ans->next;
		}
		return ptr->next;
	}

	// Recursive Approach
	ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
		ListNode* ptr1 = list1;
		ListNode* ptr2 = list2;

		if (ptr1 == nullptr)
			return list2;
		if (ptr2 == nullptr)
			return list1;

		if (ptr1->val < ptr2->val)
		{
			ptr1->next = mergeTwoLists(ptr1->next, ptr2);
			return ptr1;
		}
		else
		{
			ptr2->next = mergeTwoLists(ptr1, ptr2->next);
			return ptr2;
		}
	}
};

int main()
{


	return 0;
}

