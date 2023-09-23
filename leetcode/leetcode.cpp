#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <functional>
#include <stack>
#include <bit>
#include <bitset>
#include <cstdint>

bool containsDuplicate(std::vector<int>& nums) {
	std::sort(nums.begin(), nums.end());

	for (int i{ 0 }; i < static_cast<int>(nums.size()) - 1; i++)
			if (nums[i] == nums[i+1])
				return true;

	return false;
}

bool containsDuplicate(std::vector<int>& nums) {
	std::sort(nums.begin(), nums.end());

	auto it = std::adjacent_find(nums.begin(), nums.end());
	if (it == nums.end())
		return false;
	else
		return true;

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

