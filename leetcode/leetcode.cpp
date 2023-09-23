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

// O(n^2)
//std::vector<int> twoSum(std::vector<int>& nums, int target) {
//	for (int i{ 0 }; i < nums.size() - 1; ++i) {
//		for (int j{ i + 1 }; j < nums.size(); ++j) {
//			if (nums[i] + nums[j] == target)
//			{
//				return { i, j };
//			}
//
//		}
//	}
//
//	return {};
//}


// https://leetcode.com/problems/two-sum/solutions/3619262/3-method-s-c-java-python-beginner-friendly/
// O(n)
// two pass hash table
//std::vector<int> twoSum(std::vector<int>& nums, int target) {
//	std::unordered_map<int, int> numsMap;
//	int n = static_cast<int>(nums.size());
//
//	// Build the hash table
//	for (int i{ 0 }; i < n; i++)
//	{
//		numsMap[nums[i]] = i;
//	}
//
//	// find the complement
//	for (int i{ 0 }; i < n; i++)
//	{
//		int complement = target - nums[i];
//		if (numsMap.count(complement) && numsMap[complement] != i)
//			return { i, numsMap[complement] };
//	}
//
//	return {}; // no solution found
//}

// one pass hash table
std::vector<int> twoSum(std::vector<int>& nums, int target) {
	std::unordered_map<int, int> numsMap;
	int complement{ 0 };

	for (int i{ 0 }; i < static_cast<int>(nums.size()); i++)
	{
		complement = target - nums[i];
		if (numsMap.count(complement))
			return { numsMap[complement], i };

		numsMap[nums[i]] = i;
	}

	return {};
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

