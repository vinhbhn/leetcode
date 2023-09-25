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

int missingNumber(std::vector<int>& nums) {
	int n = nums.size();
	int sum = (n * (n + 1)) / 2;
	for (int i{ 0 }; i < n; i++)
	{
		sum -= nums[i];
	}
	return sum;
}

int main()
{
	std::vector nums = { 3,0,1 };
	std::cout << missingNumber(nums) << '\n';

	nums = { 0,1 };
	std::cout << missingNumber(nums) << '\n';

	nums = { 9,6,4,2,3,5,7,0,1 };
	std::cout << missingNumber(nums) << '\n';

	return 0;
}

