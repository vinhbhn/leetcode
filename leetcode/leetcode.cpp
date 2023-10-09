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

int sumOfUnique(std::vector<int>& nums) {
	std::unordered_map<int, int> mp;
	for (auto num : nums)
		mp[num]++;

	int sum = 0;
	for (auto &x : mp)
		if (x.second == 1)
			sum += x.first;

	return sum;
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
