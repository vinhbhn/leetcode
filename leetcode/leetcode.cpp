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
#include <set>
#include <numeric>
#include <sstream>
#include <queue>
#include<map>

struct ListNode {
	int val;
	ListNode* next;
	ListNode() : val(0), next(nullptr) {}
	ListNode(int x) : val(x), next(nullptr) {}
	ListNode(int x, ListNode* next) : val(x), next(next) {}
};

// https://leetcode.com/problems/add-two-numbers/solutions/3675747/beats-100-c-java-python-beginner-friendly/
// O(max|l1,l2|) O(n)
ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
	int sum = 0, carry = 0;
	ListNode* dummy = new ListNode();
	ListNode* temp = dummy;

	while (l1 || l2 || carry)
	{
		if (l1)
		{
			sum += l1->val;
			l1 = l1->next;
		}
		if (l2)
		{
			sum += l2->val;
			l2 = l2->next;
		}
		sum += carry;
		carry = sum / 10;

		ListNode* newNode = new ListNode(sum % 10);
		temp->next = newNode;
		temp = temp->next;

		sum = 0;
	}

	ListNode* result = dummy->next;
	delete dummy;

	return result;
}

int main()
{
	std::vector<int> num = { 1,2,0,0 };
	int k = 34;
	for (auto& x : addToArrayForm(num, k))
		std::cout << x << ' ';
	std::cout << '\n';

	num = { 2,7,4 };
	k = 181;
	for (auto& x : addToArrayForm(num, k))
		std::cout << x << ' ';
	std::cout << '\n';

	num = { 2,1,5 };
	k = 806;
	for (auto& x : addToArrayForm(num, k))
		std::cout << x << ' ';
	std::cout << '\n';

	return 0;
}

/*ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);*/
