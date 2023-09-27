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

//int findNonMinOrMax(std::vector<int>& nums) {
//	if (nums.size() <= 2)
//		return -1;
//
//	auto [min, max] = std::minmax_element(nums.begin(), nums.end());
//
//	for (int i = 0; i < nums.size(); i++)
//	{
//		if (nums[i] > *min && nums[i] < *max)
//			return nums[i];
//	}
//
//	return -1;
//}

int findNonMinOrMax(std::vector<int>& nums) {
	std::sort(nums.begin(), nums.end());
	if (nums.size() <= 2)
		return -1;
	else
		return nums[1];
}

int main()
{
	std::vector nums = { 3,2,1,4 };
	std::cout << findNonMinOrMax(nums) << '\n';

	nums = { 1,2 };
	std::cout << findNonMinOrMax(nums) << '\n';

	nums = { 2,1,3 };
	std::cout << findNonMinOrMax(nums) << '\n';

	return 0;
}

