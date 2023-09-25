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

// hash map
// O(n) O(n)
int singleNumber(std::vector<int>& nums) {
	std::unordered_map<int, int> s;

	for (auto num : nums)
		s[num]++;

	for (auto x : s)
		if (x.second == 1)
			return x.first;

	return 0;
}

// constant space
// O(n) O(1)
int singleNumber(std::vector<int>& nums) {
	int ans{ 0 };

	for (auto num : nums)
		ans ^= num;

	return ans;
}



int main()
{
	std::vector<int> nums = { 2,2,1 };
	std::cout << singleNumber(nums) << '\n';

	nums = { 4,1,2,1,2 };
	std::cout << singleNumber(nums) << '\n';

	nums = { 1 };
	std::cout << singleNumber(nums) << '\n';


	return 0;
}

