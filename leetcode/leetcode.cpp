#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <functional>
#include <stack>
#include <bit>
#include <bitset>
#include <cstdint>
#include <unordered_set>

struct ListNode {
	int val;
	ListNode* next;
	ListNode() : val(0), next(nullptr) {}
	ListNode(int x) : val(x), next(nullptr) {}
	ListNode(int x, ListNode* next) : val(x), next(next) {}
};

// https://leetcode.com/problems/remove-linked-list-elements/solutions/3136351/c-recursive-approach/
//ListNode* removeElements(ListNode* head, int val) {
//	// base case, recursion ends when null is reached
//	if (head == NULL)
//		return NULL;
//
//	// the node has to be removed -> it is skipped during the iteration
//	if (head->val == val)
//		return removeElements(head->next, val);
//
//	// the node doesn't have to be skipped -> the rest of the list has
//	// to be joined to the node
//	head->next = removeElements(head->next, val);
//	return head;
//}

// https://leetcode.com/problems/remove-linked-list-elements/solutions/722528/c-2-solutions-with-single-pointer-with-double-pointers-easy-to-understand/
//ListNode* removeElements(ListNode* head, int val) {
//	if (head == nullptr) return head;
//	while (head != nullptr && head->val == val)
//	{
//		head = head->next;
//	}
//	ListNode* curr = head;
//	ListNode* prev = nullptr;
//	while (curr != nullptr)
//	{
//		if (curr->val == val)
//		{
//			prev->next = curr->next;
//			curr = curr->next;
//		}
//		else
//		{
//			prev = curr;
//			curr = curr->next;
//		}
//	}
//	return head;
//}

ListNode* removeElements(ListNode* head, int val) {
	if (head == nullptr) return head;

	// This is for the case when a linked list is like this: 
		// 1->1->2->null , val = 1
		// 1->1->1->null , val = 1
	while (head != nullptr && head->val == val)
	{
		head = head->next;
	}

	ListNode* curr = head;
	while (curr != nullptr && curr->next != nullptr)
	{
		if (curr->next->val == val)
		{
			curr->next = curr->next->next;
		}
		else
			curr = curr->next;
	}
	return head;
}


// not answer
//ListNode* removeElements(ListNode* head, int val) {
//	ListNode* temp = head;
//
//	while (temp && temp->next)
//	{
//		if (temp->next->val == val)
//		{
//			temp->next = temp->next->next;
//			continue;
//		}
//		temp = temp->next;
//	}
//
//	return head;
//}

int main()
{
	std::vector<int> nums = { 3,2,3 };
	std::cout << majorityElement(nums) << '\n';

	nums = { 2,2,1,1,1,2,2 };
	std::cout << majorityElement(nums) << '\n';

	nums = { 6,5,5 };
	std::cout << majorityElement(nums) << '\n';

	return 0;
}

