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

// https://leetcode.com/problems/contains-duplicate-ii/solutions/2727290/c-easy-detailed-explaination-optimized/
bool containsNearbyDuplicate(std::vector<int>& nums, int k) {
	std::unordered_map<int, int> mp;
	for (int i{ 0 }; i < nums.size(); i++)
	{
		// mp.count() will tell whatever ith index that i want, have i seen it before?
		if (mp.count(nums[i]))
		{
			// if i have already seen this number, then check for conidtion abs(i-j) <= k
			if (std::abs(i - mp[nums[i]]) <= k)
				return true;
		}
		// if I have not seen this number before, insert the number with its position in the map
		// and if the number is already present in the map, then update the position of that number

		mp[nums[i]] = i;
	}

	// after the complete traversal, if we don't find a pair to satisfy the condition, return false
	return false;
}

int main()
{
	std::vector nums = { 1,2,3,1 };
	std::cout << std::boolalpha;
	std::cout << containsNearbyDuplicate(nums, 3) << '\n';

	nums = { 1,0,1,1 };
	std::cout << containsNearbyDuplicate(nums, 1) << '\n';

	nums = { 1,2,3,1,2,3 };
	std::cout << containsNearbyDuplicate(nums, 2) << '\n';

	nums = { 0, 1, 2, 3, 4, 0, 0, 7, 8, 9, 10, 11, 12, 0 };
	std::cout << containsNearbyDuplicate(nums, 2) << '\n';

	return 0;
}

