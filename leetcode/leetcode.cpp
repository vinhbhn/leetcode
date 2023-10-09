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

bool isGood(std::vector<int>& nums) {
	// sort and find max element in nums vector
	std::sort(nums.begin(), nums.end());
	int max = nums[nums.size() - 1];

	// generate base[max] = [1,2,...,max-1,max,max]
	std::vector<int> expected;
	for (int i = 1; i <= max; i++)
		expected.push_back(i);
	// then push one more max
	expected.push_back(max);

	// check size to avoid overflow
	if (nums.size() != expected.size())
		return false;
	// if size is equal then check element in two vectors
	for (int i = expected.size() - 1 ; i >= 0; i--)
	{
		if (nums[i] != expected[i])
			return false;
	}

	return true;
}



int main()
{
	std::vector nums = { 1,12,-5,-6,50,3 };
	int k = 4;
	std::cout << findMaxAverage(nums, k) << '\n';

	nums = { 5 };
	k = 1;
	std::cout << findMaxAverage(nums, k) << '\n';

	nums = { -1 };
	std::cout << findMaxAverage(nums, k) << '\n';

	return 0;
}

/*ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);*/
