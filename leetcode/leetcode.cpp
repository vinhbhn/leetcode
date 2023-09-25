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
//int singleNumber(std::vector<int>& nums) {
//	std::unordered_map<int, int> s;
//
//	for (auto num : nums)
//		s[num]++;
//
//	for (auto x : s)
//		if (x.second == 1)
//			return x.first;
//
//	return 0;
//}

// https://leetcode.com/problems/single-number-ii/solutions/3714928/bit-manipulation-c-java-python-beginner-friendly/
// bit manipulation
//int singleNumber(std::vector<int>& nums) {
//	int ans{ 0 };
//
//	for (int i{ 0 }; i < 32; i++)
//	{
//		int sum = 0;
//		for (const int num : nums)
//			sum += num >> i & 1;
//		sum %= 3;
//		ans |= sum << i;
//	}
//
//	return ans;
//}
// magic
int singleNumber(std::vector<int>& nums) {
	int ones{ 0 }, twos{ 0 };

	for (const int num : nums)
	{
		ones ^= (num & ~twos);
		twos ^= (num & ~ones);
	}

	return ones;
}


int main()
{
	std::vector<int> nums = { 2,2,3,2 };
	std::cout << singleNumber(nums) << '\n';

	nums = { 0,1,0,1,0,1,99 };
	std::cout << singleNumber(nums) << '\n';

	return 0;
}

