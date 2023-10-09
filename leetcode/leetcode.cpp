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

// slow because use vector to save sum
//double findMaxAverage(std::vector<int>& nums, int k) {
//	std::vector<int> result;
//	int sum = 0, count = 0, j = 0;
//	for (int i = 0; i <= nums.size() - k; i++)
//	{
//		j = i;
//		while (count < k)
//		{
//			sum += nums[j++];
//			++count;
//		}
//
//		// reset
//		result.push_back(sum);
//		sum = 0;
//		count = 0;
//	}
//
//	int max = INT_MIN;
//	for (auto x : result)
//		if (max < x)
//			max = x;
//
//	return static_cast<double>(max) / k;
//}

double findMaxAverage(std::vector<int>& nums, int k) {
	int sum = 0, i = 0;

	// init
	while (i < k)
		sum += nums[i++];

	int max_sum = sum;
	for(i = k; i < nums.size(); i++)
	{
		sum += nums[i] - nums[i-k];
		max_sum = std::max(sum, max_sum);
	}

	return static_cast<double>(max_sum) / k;
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
