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

// O(n) O(n)
//int findDuplicate(std::vector<int>& nums) {
//	std::unordered_map<int, int> mp;
//
//	for (auto num : nums)
//		mp[num]++;
//
//	for (auto x : mp)
//		if (x.second >= 2)
//			return x.first;
//
//	return {};
//}

// https://leetcode.com/problems/find-the-duplicate-number/solutions/4062141/97-77-6-approaches-set-count-binary-search-fast-slow-mark-sort/
// fast-slow pointer approach (Floyd's cycle detection) O(n) O(1)
int findDuplicate(std::vector<int>& nums) {
	int slow = nums[0], fast = nums[0];

	do {
		slow = nums[slow];
		fast = nums[nums[fast]];
	} while (slow != fast);

	slow = nums[0];
	while (slow != fast)
	{
		slow = nums[slow];
		fast = nums[fast];
	}

	return slow;
}

int main()
{
	std::vector nums = { 1,3,4,2,2 };
	std::cout << findDuplicate(nums) << '\n';

	nums = { 3,1,3,4,2 };
	std::cout << findDuplicate(nums) << '\n';

	nums = { 2, 2, 2, 2, 2 };
	std::cout << findDuplicate(nums) << '\n';

	return 0;
}

