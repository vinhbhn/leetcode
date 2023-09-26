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

std::vector<int> findErrorNums(std::vector<int>& nums) {
	std::sort(nums.begin(), nums.end());
	int n = nums.size(), dup = 0;
	// from 1 to n, not duplicate
	int sumElement = (n * (n + 1)) / 2;

	for (int i = 0; i < n - 1; i++)
	{
		if (nums[i] == nums[i + 1])
		{
			dup = nums[i];
			break;
		}
	}

	for (auto num : nums)
		sumElement -= num;

	return { dup, sumElement + dup };
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

