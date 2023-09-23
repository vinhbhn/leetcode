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

// O(n logn)
//bool containsDuplicate(std::vector<int>& nums) {
//	std::sort(nums.begin(), nums.end());
//
//	for (int i{ 0 }; i < static_cast<int>(nums.size()) - 1; i++)
//		if (nums[i] == nums[i + 1])
//			return true;
//
//	return false;
//}
//
//bool containsDuplicate(std::vector<int>& nums) {
//	std::sort(nums.begin(), nums.end());
//
//	auto it = std::adjacent_find(nums.begin(), nums.end());
//	if (it == nums.end())
//		return false;
//	else
//		return true;
//
//	return false;
//}

//https://leetcode.com/problems/contains-duplicate/solutions/3672475/4-method-s-c-java-python-beginner-friendly/
// hash set
// O(n)
//bool containsDuplicate(std::vector<int>& nums) {
//	std::unordered_set<int> seen;
//	for (int num : nums)
//	{
//		if (seen.count(num) > 0)
//			return true;
//		seen.insert(num);
//	}
//	return false;
//}

// hash map
// O(n)
bool containsDuplicate(std::vector<int>& nums)
{
	std::unordered_map<int, int> seen;
	for (int num : nums)
	{
		if (seen[num] >= 1)
			return true;
		seen[num]++;
	}
	return false;
}

int main()
{
	std::vector<int> nums{ 1,2,3,1 };
	std::cout << std::boolalpha;
	std::cout << containsDuplicate(nums) << '\n';

	nums = { 1,2,3,4 };
	std::cout << containsDuplicate(nums) << '\n';

	nums = { 1,1,1,3,3,4,3,2,4,2 };
	std::cout << containsDuplicate(nums) << '\n';

	return 0;
}

